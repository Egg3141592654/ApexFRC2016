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
}

// Called repeatedly when this Command is scheduled to run
void OverrideCommand::Execute()
{
	Robot::armOverride->Drive(.5 * Robot::oi->GetArmJoystick()->GetRawAxis(1));
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
