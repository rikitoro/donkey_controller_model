#ifndef __PROPORTIONALCONTROL
#define __PROPORTIONALCONTROL

class ProportionalControl {
	public:
		ProportionalControl();
		void setControlParameter(float kp);
		int calcAcceleratorLevel(int targetValue, int currentValue, float dt);
	private:
		float kp;
		int prevAcceleratorLevel;
		int trancate(int value);

};


#endif // __PROPORTIONALCONTROL
