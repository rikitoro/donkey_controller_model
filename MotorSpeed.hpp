#ifndef __MOTORSPEED
#define __MOTORSPEED

//#include "SpeedMeter.hpp"

template <class SpeedMeter> class MotorSpeed {
	//	private attribute
	private:
		const SpeedMeter* speedMeter;
		int targetValue;
	public:
/*		MotorSpeed(const SpeedMeter* speedMeter);
		void setTargetValue(int targetValue);
		int getTargetValue();
		int getValue();
*/
		MotorSpeed(const SpeedMeter* speedMeter):
		targetValue(10)
		{
			this->speedMeter = speedMeter;
		}

		void setTargetValue(int targetValue)
		{
			this->targetValue = targetValue;
		}

		int getTargetValue()
		{
			return this->targetValue;
		}

		int getValue()
		{
			return this->speedMeter->getValue();
		}

};

/*

template<class SpeedMeter>
	MotorSpeed<SpeedMeter>::MotorSpeed(const SpeedMeter* speedMeter):
	targetValue(10)
{
	this->speedMeter = speedMeter;
}

template<class SpeedMeter>
	void MotorSpeed<SpeedMeter>::setTargetValue(int targetValue)
{
	this->targetValue = targetValue;
}


template<class SpeedMeter>
	int MotorSpeed<SpeedMeter>::getTargetValue()
{
	return this->targetValue;
}

template<class SpeedMeter>
	int MotorSpeed<SpeedMeter>::getValue()
{
	return this->speedMeter->getValue();
}
*/

#endif // __MOTORSPEED