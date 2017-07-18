#include <mpcController.h>
#include <boost/timer/timer.hpp>

mpcController::mpcController()
{
	status = 0;
	kktValue = 0;
	objValue = 0;
	nIterations = 0;

	iterNum = 8;

	double tempWeight[ACADO_NY*ACADO_NY] = { 0.1,1.0,1.0,1.0,1.0, 1.0,0.1,1.0,1.0,1.0, 1.0,1.0,3.8,1.0,1.0, 1.0,1.0,1.0,10.0,1.0, 1.0,1.0,1.0,1.0,30.0 };
	double tempNWeight[ACADO_NYN*ACADO_NYN] = { 1e-10,1.0, 1.0,1e-10 };

	//---------------------weight update----------------
	for (int i = 0; i < ACADO_NY*ACADO_NY; ++i)
	{
		weightArray[i] = tempWeight[i];
		acadoVariables.W[i] = weightArray[i];
	}

	//---------------------weightN update----------------
	for (int i = 0; i < ACADO_NYN*ACADO_NYN; ++i)
	{
		weightNArray[i] = tempNWeight[i];
		acadoVariables.WN[i] = weightNArray[i];
	}
}

mpcController::~mpcController()
{

}

void mpcController::setInitStates(double beta, double yaw, double yawRate, double X, double Y, double deltaF, double Vx)
{
	acadoVariables.x[0] = beta;//rad
	acadoVariables.x[1] = yaw; //rad
	acadoVariables.x[2] = yawRate;//rad/s
	acadoVariables.x[3] = X;//m
	acadoVariables.x[4] = Y;//m
	acadoVariables.x[5] = deltaF;//rad
	acadoVariables.x[6] = Vx;//m/s

	//initial all X states
	for (int i = 1; i < ACADO_N + 1; ++i)
	{
		double t_beta = acadoVariables.x[(i - 1) * ACADO_NX + 0];
		double t_phi = acadoVariables.x[(i - 1) * ACADO_NX + 1];
		double t_phi_dot = acadoVariables.x[(i - 1) * ACADO_NX + 2];
		double t_X = acadoVariables.x[(i - 1) * ACADO_NX + 3];
		double t_Y = acadoVariables.x[(i - 1) * ACADO_NX + 4];
		double t_delta_f = acadoVariables.x[(i - 1) * ACADO_NX + 5];
		double t_Vx = acadoVariables.x[(i - 1) * ACADO_NX + 6];

		double d_beta = 2.0 * Cf / M / t_Vx*(t_delta_f - t_beta - Lf*t_phi_dot / t_Vx) + 2.0 * Cr / M / t_Vx*(-t_beta + Lr*t_phi_dot / t_Vx) - t_phi_dot;
		double d_phi = t_phi_dot;
		double d_phi_dot = 2.0 * Cf*Lf / Iz*(t_delta_f - t_beta - Lf*t_phi_dot / t_Vx) - 2.0 * Cr*Lr / Iz*(-t_beta + Lr*t_phi_dot / t_Vx);
		double d_X = t_Vx*cos(t_phi) - t_Vx*tan(t_beta)*sin(t_phi);
		double d_Y = t_Vx*sin(t_phi) + t_Vx*tan(t_beta)*cos(t_phi);
		double d_delta_f = 0;
		double d_Vx = 0;

		acadoVariables.x[i * ACADO_NX + 0] = t_beta + d_beta*dt;
		acadoVariables.x[i * ACADO_NX + 1] = t_phi + d_phi*dt;
		acadoVariables.x[i * ACADO_NX + 2] = t_phi_dot + d_phi_dot*dt;
		acadoVariables.x[i * ACADO_NX + 3] = t_X + d_X*dt;
		acadoVariables.x[i * ACADO_NX + 4] = t_Y + d_Y*dt;
		acadoVariables.x[i * ACADO_NX + 5] = t_delta_f + d_delta_f*dt;
		acadoVariables.x[i * ACADO_NX + 6] = t_Vx + d_Vx*dt;
	}

	//initial x0
	acadoVariables.x0[0] = beta;
	acadoVariables.x0[1] = yaw;
	acadoVariables.x0[2] = yawRate;
	acadoVariables.x0[3] = X;
	acadoVariables.x0[4] = Y;
	acadoVariables.x0[5] = deltaF;
	acadoVariables.x0[6] = Vx;


	//initial U
	for (int i = 0; i < ACADO_N; ++i)
	{
		for (int j = 0; j < ACADO_NU; ++j)
		{
			acadoVariables.u[i * ACADO_NU + j] = 0.0;
		}
	}

	//set Weights
	for (int i = 0; i < ACADO_NY*ACADO_NY; ++i)
	{
		acadoVariables.W[i] = weightArray[i];
	}

	for (int i = 0; i < ACADO_NYN*ACADO_NYN; ++i)
	{
		acadoVariables.WN[i] = weightNArray[i];
	}

}

void mpcController::setReference(float ref[ACADO_N][3])
{
	for (int i = 0; i < ACADO_N; ++i)
	{
		for (int j = 0; j < ACADO_NY; ++j)
		{
			switch (j)
			{
			case 0:acadoVariables.y[i * ACADO_NY + j] = double(ref[i][0]); break;//X
			case 1:acadoVariables.y[i * ACADO_NY + j] = double(ref[i][1]); break;//Y
			case 2:acadoVariables.y[i * ACADO_NY + j] = double(ref[i][2]); break;//Yaw
			case 3:acadoVariables.y[i * ACADO_NY + j] = 0; break;//delta_f_dot
			case 4:acadoVariables.y[i * ACADO_NY + j] = double(ref[i][2] * ref[i][2]); break;//Yaw*Yaw
			}
		}
	}

	acadoVariables.yN[0] = double(ref[ACADO_N - 1][0]);
	acadoVariables.yN[1] = double(ref[ACADO_N - 1][1]);
}

void mpcController::setWeight(double wX, double wY, double wYaw, double wDeltaFdot, double wYawYaw)
{
	weightArray[0] = wX;
	weightArray[6] = wY;
	weightArray[12] = wYaw;
	weightArray[18] = wDeltaFdot;
	weightArray[24] = wYawYaw;
	for (int i = 0; i < ACADO_NY*ACADO_NY; ++i)
	{
		acadoVariables.W[i] = weightArray[i];
	}
}

void mpcController::setIterateNum(int iterNumIn)
{
	iterNum = iterNumIn;
}

void mpcController::getPredictStates(double states[ACADO_N + 1][ACADO_NX])
{
	for (int i = 0; i < ACADO_N + 1; ++i)
	{
		for (int j = 0; j < ACADO_NX; ++j)
		{
			states[i][j] = acadoVariables.x[i * ACADO_NX + j];
		}
	}
}

int mpcController::getControllerFrontWheel(double & frontWheelAngle, float ref[ACADO_N][3], double P, double D)
{
	static int i = 1;
	static int j = 5;

	double PIDsteer = PIDController(double(-ref[10][1]), P, D);

	double frontWheelAnglePre = frontWheelAngle;
	frontWheelAngle = acadoVariables.x[i * ACADO_NX + j];

	if (fabs(frontWheelAnglePre - frontWheelAngle) > (2.5 / 180 * pi))
	{
		frontWheelAngle = frontWheelAnglePre;
		std::cout << "Warning! Controller Error! Speed Down! KKT : " << kktValue << std::endl;
	}

	if (status != 0)
	{
		frontWheelAngle = PIDsteer;
		if ((frontWheelAngle - frontWheelAnglePre) > (0.4 / 180 * pi))
		{
			frontWheelAngle = frontWheelAnglePre + (0.4 / 180 * pi);
		}
		else if ((frontWheelAngle - frontWheelAnglePre) < (-0.4 / 180 * pi))
		{
			frontWheelAngle = frontWheelAnglePre - (0.4 / 180 * pi);
		}
		std::cout << "Status : " << int(status) << "    Mode Change to PID !" << std::endl;
	}
	else
	{
		status = 0;
	}

	//-----------------------bound the steer---------------------
	if ((frontWheelAngle - frontWheelAnglePre) > (1.5 / 180 * pi))
	{
		frontWheelAngle = frontWheelAnglePre + (1.5 / 180 * pi);
		std::cout << "MPC Bounding Exceed !" << std::endl;
	}
	else if ((frontWheelAngle - frontWheelAnglePre) < (-1.5 / 180 * pi))
	{
		frontWheelAngle = frontWheelAnglePre - (1.5 / 180 * pi);
		std::cout << "MPC Bounding Exceed !" << std::endl;
	}

	return int(status);
}

void mpcController::initialController(void)
{
	memset(&acadoWorkspace, 0, sizeof(acadoWorkspace));
	acado_initializeSolver();
}

void mpcController::solveController(void)
{
	boost::timer::cpu_timer cpuTimer;
	cpuTimer.start();

	for (int i = 0; i < iterNum; i++)
	{
		acado_preparationStep();

		status = (double)acado_feedbackStep();

		kktValue = acado_getKKT();
		objValue = acado_getObjective();
		nIterations = (double)acado_getNWSR();

		double timeMs = atof(cpuTimer.format(6).c_str())*1000.0;
		if (timeMs > 140)
		{
			std::cout << "MPC Solve Timeout!" << std::endl;
			status = -1;
			break;
		}
	}
}

double mpcController::PIDController(double error, double P, double D)
{
	static double errorPre = 0;
	double derrror = error - errorPre;
	errorPre = error;

	double controlSteer = (P * error + D * derrror) / -18.7 / 180 * pi;
	return controlSteer;
}
