#include "sfr29.h"
#include "init_devices.hpp"

extern "C" {
	extern char get_switch();
	extern void set_led(char pattern);
}

#include "encoder_driver.h"
#include "led_driver.h"

extern "C" {
	extern void wait_ms(int n);
	
}
#include "utility.h"

#include "RotaryEncoder.hpp"
#include "MotorSpeed.hpp"
#include "MotorPwm.hpp"
#include "ProportionalControl.hpp"

void main(void)
{
	init_devices();
	
	MotorPwm* accelerator = new MotorPwm();
	RotaryEncoder* speedMeter = new RotaryEncoder();

	ProportionalControl* controlMethod = new ProportionalControl();
	controlMethod->setControlParameter(1.0);

	MotorSpeed<RotaryEncoder>* motorSpeed = new MotorSpeed<RotaryEncoder>(speedMeter);
	motorSpeed->setTargetValue(32);
	char pattern = static_cast<char>(motorSpeed->getTargetValue());
	set_led(pattern);

	wait_ms(5000);
	while(1) {
		//accelerator->setLevel(50);
		int tv = motorSpeed->getTargetValue();
		int cv = motorSpeed->getValue();
		float dt = 1000.0f;
		int level = controlMethod->calcAcceleratorLevel(tv, cv, dt);
		accelerator->setLevel(30);
		char pattern1 = static_cast<char>(tv);
		set_led(pattern1);
		wait_ms(500);
		char pattern2 = static_cast<char>(cv);
		set_led(pattern2);
		wait_ms(500);
	}
	
	delete motorSpeed;
	delete controlMethod;
	delete speedMeter;
	delete accelerator;

}
