#include "configure.h"

const double pi = 3.1415926535897932384626433832795;

//-------------------ACADO----------------------
ACADOvariables acadoVariables;
ACADOworkspace acadoWorkspace;


ControlPara_t myControlConfig;
reference_t   myReference;
predict_t	  myPredict;


unique_ptr<oxts2000> oxts2000Device_online(nullptr);
unique_ptr<mpcController> myController(nullptr);


void systemInteraction(void)
{
	boost::property_tree::ptree pt;
#ifdef WIN32
	boost::property_tree::ini_parser::read_ini("D:\\mpcSetup.ini", pt);
#else
	boost::property_tree::ini_parser::read_ini("/home/mpcSetup.ini", pt);
#endif
	//------------------system------------------//
	if (pt.get<string>("System.MPCMode").compare("control") == 0)
	{
		myControlConfig.MPCMode = MPCModeType::Control;
	}
	else
	{
		myControlConfig.MPCMode = MPCModeType::PID;
	}

	//------------------steer------------------//
	myControlConfig.steerAddr = pt.get<string>("Steer.IPAddress");
	myControlConfig.steerSendPort = pt.get<int>("Steer.steerSenderPort");

	//------------------controller-----------//
	myControlConfig.xW = atof(pt.get<string>("Controller.xWeight").c_str());
	myControlConfig.yW = atof(pt.get<string>("Controller.yWeight").c_str());
	myControlConfig.yawW = atof(pt.get<string>("Controller.yawWeight").c_str());
	myControlConfig.deltafdotW = atof(pt.get<string>("Controller.deltafWeight").c_str());
	myControlConfig.yawyawW = atof(pt.get<string>("Controller.yawyawWeight").c_str());

	myControlConfig.mpcIterNum = pt.get<int>("Controller.iterNum");
	myControlConfig.cutVelocity = atof(pt.get<string>("Controller.cutVelocity").c_str());

	myControlConfig.proportionP = atof(pt.get<string>("Controller.P_para").c_str());
	myControlConfig.differentialD = atof(pt.get<string>("Controller.D_para").c_str());
	myControlConfig.intergateI = atof(pt.get<string>("Controller.I_para").c_str());
	myControlConfig.integrateControlMax = atof(pt.get<string>("Controller.I_steerMax").c_str());
	myControlConfig.integrateControlMin = atof(pt.get<string>("Controller.I_steerMin").c_str());

}

void systemInitialize(void)
{
	//--------------------------sensor initialize------------------
	oxts2000Device_online.reset(new oxts2000(GPS_INS_IMU::modeType::offline, GPS_INS_IMU::saveType::unsave));
	myController.reset(new mpcController());
	myController->setIterateNum(myControlConfig.mpcIterNum);
}


void controllerSetup(void)
{
	myControlConfig.DeltaFNow = 0;
	myControlConfig.integrateControl = 0;

	memset(myReference.ref, 0, sizeof(myReference.ref));
	memset(myPredict.predicStates, 0, sizeof(myPredict.predicStates));
	//------------------------------------------------------------------

#ifdef WIN32
	oxts2000Device_online->steerInitialize(myControlConfig.steerSendPort);
#else
	oxts2000Device_online->steerInitialize(myControlConfig.steerAddr, myControlConfig.steerSendPort);
#endif

}

int iterativeControl(void)
{
	std::cout << "Wait for connecting" << std::endl;

	TCPServer myServer(9800);
	UDPClient myUDPClient("195.0.0.30",9802);
WFC:
	myServer.waitForConnect();
	std::cout << "connected!" << endl;
	while(1)
	{
		timeCalculate(1);

		double controlRatio = 1.0;

		char sendCommand[3]="rf";
		int ret = myServer.TCPServerSend(sendCommand,3);
		if (-1 == ret)
		{
			std::cout << "disconnect! wait for next connect!" << std::endl;
			goto WFC;
		}

		//-----------------------TCP receive reference data--------------------------
		unique_ptr<char[]> refString(new char[sizeof(reference_t)]);
		ret = myServer.TCPServerReceive(refString.get(),sizeof(reference_t));
		if (-1 == ret)
		{
			std::cout << "disconnect! wait for next connect!" << std::endl;
			goto WFC;
		}
		memcpy(&myReference,refString.get(),sizeof(reference_t));

		myControlConfig.TCPTimePass = timeCalculate(2);


		if (myReference.mVf < myControlConfig.cutVelocity)
		{
			controlRatio = myReference.mVf / myControlConfig.cutVelocity;
			if (controlRatio < 0.3)	controlRatio = 0.3;
			myReference.mVf = myControlConfig.cutVelocity;
		}

		//---------------------------------control----------------------
		//----integration calculate----
		myControlConfig.integrateControl = myControlConfig.integrateControl + myReference.ref[0][1] * myControlConfig.intergateI;
		if (myControlConfig.integrateControl > myControlConfig.integrateControlMax)
		{
			myControlConfig.integrateControl = myControlConfig.integrateControlMax;
		}
		if (myControlConfig.integrateControl < myControlConfig.integrateControlMin)
		{
			myControlConfig.integrateControl = myControlConfig.integrateControlMin;
		}

		//------mpc control------------
		if (MPCModeType::Control == myControlConfig.MPCMode)
		{
			myController->setInitStates(0, 0, 0, 0, 0, myControlConfig.DeltaFNow, myReference.mVf);
			myController->setReference(myReference.ref);
			myController->setWeight(myControlConfig.xW, myControlConfig.yW, myControlConfig.yawW, myControlConfig.deltafdotW, myControlConfig.yawyawW);
			myController->initialController();
			myController->solveController();
			myController->getControllerFrontWheel(myControlConfig.DeltaFNow, myReference.ref, myControlConfig.proportionP, myControlConfig.differentialD);
			myController->getPredictStates(myPredict.predicStates);
		}
		else if (MPCModeType::PID == myControlConfig.MPCMode) //------PID control------------
		{
			myControlConfig.DeltaFNow = myController->PIDController(-myReference.ref[10][1], myControlConfig.proportionP, myControlConfig.differentialD);
		}

		myControlConfig.MPCTimePass = timeCalculate(2) - myControlConfig.TCPTimePass;

		//---------------------------sendto steer----------------------
		double mpcSteer = myControlConfig.DeltaFNow / pi * 180 * -18.7;
		double iteSteer = -myControlConfig.integrateControl;
		oxts2000Device_online->setSteer(mpcSteer * controlRatio + iteSteer);

		//-----------------------TCP send predict data--------------------------
		unique_ptr<char[]> preString(new char[sizeof(predict_t)]);
		memcpy(preString.get(), &myPredict, sizeof(predict_t));
		myUDPClient.UDPClientSendto(preString.get(), sizeof(predict_t));


		int wholeTimeUse = timeCalculate(2);
		//left time
		myControlConfig.WholeTimePass = (int) (100 - wholeTimeUse);

		cout << "Steer:" << setprecision(1) <<mpcSteer * controlRatio + iteSteer
			 << "  kkt:" << fixed << setprecision(13) << myController->kktValue
			 << "  TCP time:" << setw(3) << myControlConfig.TCPTimePass
			 << "  MPC time:" << setw(3) << myControlConfig.MPCTimePass
			 << "  Whole:" << setw(3) << int(100 - myControlConfig.WholeTimePass)
			 << "  Vx:" << setprecision(2) << myReference.mVf << endl;


		if (myControlConfig.WholeTimePass > 1) {
			boost::this_thread::sleep(boost::posix_time::milliseconds(myControlConfig.WholeTimePass-1));
		}
	}



}

void prepareMPC(void)
{
	systemInteraction();
	systemInitialize();
	controllerSetup();
}
