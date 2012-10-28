#include "RotaryEncoder.hpp"
#include "MotorSpeed.hpp"
#include "MotorPwm.hpp"

void main(void);

void main(void)
{
	SpeedMeter *speedMeter = new RotaryEncoder();
	MotorSpeed *motorSpeed = new MotorSpeed(speedMeter);
	Accelerator *accelerator = new MotorPwm();
		
	speedMeter->getValue();
	accelerator->setLevel(50);
	
	delete motorSpeed;
	delete speedMeter;
}
