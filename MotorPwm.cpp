#include "MotorPwm.hpp"

extern "C" {
	extern void set_r_motor_mode(enum MotorMode mode);
	extern void set_r_motor_pwm(int pwm);
}

#include "motor_driver.h"

MotorPwm::MotorPwm()
{
}

void MotorPwm::setLevel(int level) 
{
	if (level > 0) {
		set_r_motor_mode(MOTOR_FORWARD);
		set_r_motor_pwm(level);
	} else if (level < 0) {
		set_r_motor_mode(MOTOR_REVERSE);
		set_r_motor_pwm(-level);
	} else {
		set_r_motor_mode(MOTOR_STOP);
		set_r_motor_pwm(0);
	}
} 

MotorPwm::~MotorPwm()
{
}

