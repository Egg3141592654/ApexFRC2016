#include "WheelieBar.h"
#include "../RobotMap.h"

WheelieBar::WheelieBar() :
		Subsystem("WheelieBar")
{
	solenoid = new Solenoid (SOLENOID_WHEELIEBAR);
}

void WheelieBar::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new MoveWheelieBar());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void WheelieBar::Open(bool setposition)
{
    solenoid->Set(setposition);
}
