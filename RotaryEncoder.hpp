#ifndef __ROTARYENCODER
#define __ROTARYENCODER

//#include "SpeedMeter.hpp"

class RotaryEncoder //: public SpeedMeter
{
	public:
		RotaryEncoder();
		int getValue() const;
		~RotaryEncoder();
};

#endif // __ROTARYENCODER