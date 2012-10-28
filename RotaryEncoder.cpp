#include "RotaryEncoder.hpp"
#include "encoder_driver.h"

extern "C" {
	extern int get_r_motor_speed();
}

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
