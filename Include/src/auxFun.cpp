#include "auxFun.h"

double timeCalculate(int flag)
{
	static boost::timer::cpu_timer cpuTimer;
	double timeMs = 0;

	// get start time
	if (1 == flag)
	{
		cpuTimer.start();
	}
	// get end time and output
	else if (2 == flag)
	{
		timeMs = atof(cpuTimer.format(6).c_str())*1000.0;
	}

	return timeMs;
}