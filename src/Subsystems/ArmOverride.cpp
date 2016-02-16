#include "ArmOverride.h"
#include "../RobotMap.h"

ArmOverride::ArmOverride() :
		Subsystem("ArmOverride")
{
	left.reset(new Talon(ARM_MOTOR_1));
	right.reset(new Talon(ARM_MOTOR_2));

	left->SetInverted(ARM_MOTOR_1_REVERSED);
	right->SetInverted(ARM_MOTOR_2_REVERSED);
}

void ArmOverride::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new OverrideCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void ArmOverride::Drive(float speed)
{
	left->SetSpeed(speed);
	right->SetSpeed(-speed);
}
