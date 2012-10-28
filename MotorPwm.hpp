#ifndef __MOTORPWM
#define __MOTORPWM

#include "Accelerator.hpp"

class MotorPwm : public Accelerator {
	public:
		MotorPwm();
		void setLevel(int level);
		~MotorPwm();
};



#endif // __MOTORPWM