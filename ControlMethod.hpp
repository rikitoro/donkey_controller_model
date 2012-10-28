#ifndef __CONTROLMETHOD
#define __CONTROLMETHOD

class ControlMethod {
	public:
		ControlMethod();
		virtual int calculateControlLevel(int targetValue, int currentValue) = 0;
		virtual ~ControlMethod() {};
};

#endif // __CONTROLMETHOD