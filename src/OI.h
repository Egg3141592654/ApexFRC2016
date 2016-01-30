#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	const int LEFT_JOYSTICK_PORT = 1;
	const int RIGHT_JOYSTICK_PORT = 2;

	static std::shared_ptr<Joystick> leftJoystick;
	static std::shared_ptr<Joystick> rightJoystick;

public:
	OI();
	Joystick * GetLeftStick(void);
	Joystick * GetRightStick(void);
};

#endif
