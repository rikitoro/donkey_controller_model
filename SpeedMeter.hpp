#ifndef __SPEEDMETER
#define __SPEEDMETER

class SpeedMeter {
	public:
		SpeedMeter();
		virtual int getValue() const = 0;
		virtual ~SpeedMeter() {};
};

#endif // __SPEEDMETER