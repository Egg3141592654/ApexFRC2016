#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	const int LEFT_JOYSTICK_PORT = 1;
	const int RIGHT_JOYSTICK_PORT = 2;
	const int OPERATOR_JOYSTICK_PORT = 3;

	static std::shared_ptr<Joystick> leftJoystick;
	static std::shared_ptr<Joystick> rightJoystick;
	static std::shared_ptr<Joystick> operatorJoystick;

public:
	OI();
	Joystick * GetLeftStick(void);
	Joystick * GetRightStick(void);
	Joystick * GetOperatorStick(void);
};

#endif
