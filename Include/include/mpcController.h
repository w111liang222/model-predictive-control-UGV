//============================================================================================================
//!
//! \file mpcController.h
//!
//! \brief definition of MPC Controller.
//!
//============================================================================================================

#ifndef __MPCCONTROLLER_H
#define __MPCCONTROLLER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <iostream>

#include "acado_common.h"
#include "acado_auxiliary_functions.h"



extern ACADOvariables acadoVariables;
extern ACADOworkspace acadoWorkspace;

class mpcController
{
public:
	double status;
	double kktValue;
	double objValue;
	double nIterations;

private:
	//------------------vehicle parameter---------------
	const double M = 2300.0;
	const double Iz = 6000.0;
	const double Lf = 1.4;
	const double Lr = 1.2;
	const double Cf = 45980.0;
	const double Cr = 45980.0;
	const double dt = 0.15;

	//--------------------------------------------------
	const double pi = 3.1415926535897932384626433832795;
	int iterNum;

	double weightArray[ACADO_NY*ACADO_NY];
	double weightNArray[ACADO_NYN*ACADO_NYN];
public:
	mpcController();
	~mpcController();
	void setInitStates(double beta, double yaw, double yawRate, double X, double Y, double deltaF, double Vx);
	void setReference(float ref[ACADO_N][3]);
	void setWeight(double wX, double wY, double wYaw, double wDeltaFdot, double wYawYaw);
	void setIterateNum(int iterNumIn);

	void getPredictStates(double states[ACADO_N + 1][ACADO_NX]);
	int  getControllerFrontWheel(double & frontWheelAngle, float ref[ACADO_N][3], double P, double D);

	void initialController(void);
	void solveController(void);

	double PIDController(double error, double P, double D);

};




#endif
