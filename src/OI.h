#ifndef OI_H
#define OI_H

#include "WPILib.h"

#include "RobotMap.h"

class OI
{
private:
	static std::shared_ptr<Joystick> armJoystick;
	static std::shared_ptr<Joystick> leftJoystick;
	static std::shared_ptr<Joystick> rightJoystick;

public:
	OI();
	Joystick * GetLeftStick(void);
	Joystick * GetRightStick(void);
	Joystick * GetArmJoystick(void);
};

#endif
