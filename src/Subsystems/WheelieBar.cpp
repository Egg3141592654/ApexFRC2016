#include "WheelieBar.h"
#include "../RobotMap.h"

WheelieBar::WheelieBar() :
		Subsystem("WheelieBar")
{
	solenoid.reset(new DoubleSolenoid (SOLENOID_WHEELIEBAR_OUT, SOLENOID_WHEELIEAR_IN));

	// Set the initial home position to be in
	solenoid->Set(DoubleSolenoid::kReverse);
}

void WheelieBar::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new MoveWheelieBar());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void WheelieBar::Open(bool setPosition)
{
    if (setPosition)
    {
    	solenoid->Set(DoubleSolenoid::kForward);
    }
    else
    {
    	solenoid->Set(DoubleSolenoid::kReverse);
    }
}
