#include "MotorSpeed.hpp"

MotorSpeed::MotorSpeed(const SpeedMeter* speedMeter)
{
	this->speedMeter = speedMeter;
}

void MotorSpeed::setTargetValue(int targetValue)
{
	this->targetValue = targetValue;
}


int MotorSpeed::getTargetVale()
{
	return this->targetValue;
}

int MotorSpeed::getValue()
{
	return this->speedMeter->getValue();
}
