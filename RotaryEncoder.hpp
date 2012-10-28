#ifndef __ROTARYENCODER
#define __ROTARYENCODER

#include "SpeedMeter.hpp"


extern "C" {
	extern int get_r_motor_speed();
}

class RotaryEncoder : public SpeedMeter
{
	public:
		RotaryEncoder();
		int getValue() const;
		~RotaryEncoder();
};

#endif // __ROTARYENCODER