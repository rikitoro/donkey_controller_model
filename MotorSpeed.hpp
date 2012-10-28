#ifndef __MOTORSPEED
#define __MOTORSPEED

#include "SpeedMeter.hpp"

class MotorSpeed {
	public:
		MotorSpeed(const SpeedMeter* speedMeter);
		void setTargetValue(int targetVale);
		int getTargetVale();
		int getValue();

	//	private attribute
	private:
		const SpeedMeter *speedMeter;
		int targetValue;
};

#endif // __MOTORSPEED