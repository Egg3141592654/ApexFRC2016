#include "Arm.h"
#include "../RobotMap.h"

Arm::Arm() :
		Subsystem("Arm")
{
solenoid = new Solenoid (SOLENOID_ARM);
}

void Arm::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new MoveArm());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Arm::Open(bool setposition)
{
	solenoid->Set(setposition);
}
