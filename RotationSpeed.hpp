#ifndef __MOTORSPEED
#define __MOTORSPEED

class MotorSpeed {
	public:
		MotorSpeed(const SpeedMeter* indicator);
		void setTargetValue(int targetVale);
		int getTargetVale();
		int getValue();

	//	private attribute
	private:
		int targetValue;
};

#endif // __MOTORSPEED