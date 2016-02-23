#include "Finger.h"
#include <RobotMap.h>
Finger::Finger() :
		Subsystem("Finger")
{
	solenoid.reset(new Solenoid (SOLENOID_FINGER));
}

void Finger::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MoveFinger());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Finger::Open(bool setposition)
{
	solenoid->Set(setposition);
}

void Finger::SetLocked(bool newLocked)
{
	isLocked = newLocked;
}

std::string Finger::GetStatus()
{
	std::string toReturn = isLocked ? "Locked, " : "Unlocked, ";
	toReturn += solenoid->Get() ? "Extended" : "Retracted";
	return toReturn;
}

