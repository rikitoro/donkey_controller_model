#include "ProportionalControl.hpp"

ProportionalControl::ProportionalControl():
kp(0.0f), prevAcceleratorLevel(0)
{
}

void ProportionalControl::setControlParameter(float kp)
{
	this->kp = kp;
}


int ProportionalControl::calcAcceleratorLevel(int targetValue, int currentValue, float dt)
{
	const int prev = this->prevAcceleratorLevel;
	const float kp = this->kp;
	const int tv = targetValue;
	const int cv = currentValue;
	
	const int calc_level = static_cast<int>(prev + kp * 0.001* dt * (tv - cv));
	const int tranc_level = trancate(calc_level);
	
	this->prevAcceleratorLevel = tranc_level;
	return tranc_level;	
}


int ProportionalControl::trancate(int value) 
{
	const int MAX = 100;
	const int MIN = -100;
	if (value > MAX) {
		return MAX;
	} else if (value < MIN) {
		return MIN;
	} else {
		return value;
	}
}


