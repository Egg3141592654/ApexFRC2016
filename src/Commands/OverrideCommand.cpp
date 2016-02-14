#include "OverrideCommand.h"
#include "Robot.h"

OverrideCommand::OverrideCommand() : Command("OverrideCommand")
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::armOverride.get());
}

// Called just before this Command runs the first time
void OverrideCommand::Initialize()
{
	Robot::armOverride->Drive(Robot::oi->GetArmJoystick()->GetY());
}

// Called repeatedly when this Command is scheduled to run
void OverrideCommand::Execute()
{
}

// Make this return true when this Command no longer needs to run execute()
bool OverrideCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void OverrideCommand::End()
{
	Robot::armOverride->Drive(0.);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void OverrideCommand::Interrupted()
{
	End();
}
