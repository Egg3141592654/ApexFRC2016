#include "ArmElevator.h"
#include "../RobotMap.h"

ArmElevator::ArmElevator() :
		Subsystem("ArmElevator")
{
	solenoid.reset(new Solenoid (SOLENOID_ARM));
}

void ArmElevator::InitDefaultCommand()
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
