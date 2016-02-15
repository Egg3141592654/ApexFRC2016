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
void ArmElevator::Open(bool setposition)
{
	solenoid->Set(setposition);
}

std::string ArmElevator::GetStatus()
{
	std::string returnStatement = isLocked ? "Locked, " : "Unlocked, ";
	returnStatement += solenoid->Get() ? "Extended" : "Retracted";
	return returnStatement;
}

void ArmElevator::SetLocked(bool newLocked)
{
	isLocked = newLocked;
}
