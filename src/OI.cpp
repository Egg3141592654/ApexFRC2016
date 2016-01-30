#include "OI.h"

std::shared_ptr<Joystick> OI::rightJoystick;
std::shared_ptr<Joystick> OI::leftJoystick;

/**
 * Initializes a class of OI for the robot driver station communication.
 */
OI::OI()
{
	// Process operator interface input here.
	OI::rightJoystick.reset(new Joystick(RIGHT_JOYSTICK_PORT));
	OI::leftJoystick.reset(new Joystick(LEFT_JOYSTICK_PORT));

}

/**
 * An accessor to get the left joystick pointer in the IO class
 */
Joystick * OI::GetLeftStick()
{
	return OI::leftJoystick.get();
}

/**
 * An accessor to get the right joystick pointer in the IO class
 */
Joystick * OI::GetRightStick()
{
	return OI::rightJoystick.get();
}
