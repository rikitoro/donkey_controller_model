#include "RotaryEncoder.hpp"

extern "C" {
	extern int get_r_motor_speed();
}

#include "encoder_driver.h"


RotaryEncoder::RotaryEncoder()
{
}

int RotaryEncoder::getValue() const
{
	return get_r_motor_speed();
}

RotaryEncoder::~RotaryEncoder()
{
}
