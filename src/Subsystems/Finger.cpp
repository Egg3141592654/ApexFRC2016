#include "Finger.h"

Finger::Finger() :
		Subsystem("Finger")
{
solenoid = new Solenoid (SOLENOID_FINGER);
}

void Finger::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new MoveFinger());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Finger::Open(bool setposition)
{
	solenoid->Set(setposition);
}

