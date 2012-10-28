#include "RotationSpeed.hpp"



void RotationSpeed::setTargetValue(int targetValue)
{

	this->targetValue = targetValue;
}


int RotationSpeed::getTargetVale()
{
	return this->targetValue;
}

int RotationSpeed::getValue()
{
	return 100; // Dummy code 
	//return this->indicator.getValue();
	
};
