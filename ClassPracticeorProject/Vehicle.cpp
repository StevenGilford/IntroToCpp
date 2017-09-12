#include "Vehicle.h"

void Vehicle::EngineOn(bool AllDoorsOpen, bool EngineStart)
{
	if (AllDoorsOpen == false && EngineStart == true)
	{
		mEngineStart = true;
	}
	else
	{
		mEngineStart = false;
	}
	return;
}
