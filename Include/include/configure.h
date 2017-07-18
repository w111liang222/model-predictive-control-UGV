//============================================================================================================
//!
//! \file configure.h
//!
//! \brief configuration file.
//!
//============================================================================================================

#ifndef __CONFIGURE_H
#define __CONFIGURE_H

#include <iostream>
#include <iomanip>
#include <vector>

#include <boost/timer/timer.hpp>
#include <boost/property_tree/ptree.hpp>  
#include <boost/property_tree/ini_parser.hpp>

#include "oxts2000.h"
#include "mpcController.h"
#include "auxFun.h"
#include <tcp/TCPServer.h>
#include <udp/UDPServer.h>
#include <udp/UDPClient.h>


enum MPCModeType { Control, PID };
typedef struct
{
	//---------------------------system---------------------------
	MPCModeType MPCMode;// Control: control vehicle follow the path

	//---------------------------steer----------------------------
	string steerAddr;//"195.0.0.26"
	int steerSendPort;//9600 steer sender UDP port
	
	//---------------------------controller-----------------------
	//MPC parameters
	double xW;// = 1e-10;
	double yW;// = 6.0;
	double yawW;// = 25.0;
	double deltafdotW;// = 140.0;
	double yawyawW;// 200.0;

	int    mpcIterNum;//8
	double cutVelocity;//1.0

	//PID control parameters
	double proportionP;//20.0
	double differentialD;//40.0
	double intergateI;// = 0.3;
	double integrateControlMax;// = 5.0;
	double integrateControlMin;// = -5.0;

	const double dt = 0.15;//0.2 s
	//private data, do not modify
	double DeltaFNow;

	double integrateControl;
	
	int TCPTimePass;
	int MPCTimePass;
	int WholeTimePass;
}ControlPara_t;


typedef struct
{
	float ref[ACADO_N][3];
	double mVf;
}reference_t;

typedef struct
{
	double predicStates[ACADO_N + 1][ACADO_NX];
}predict_t;

void prepareMPC(void);
int iterativeControl(void);

#endif
