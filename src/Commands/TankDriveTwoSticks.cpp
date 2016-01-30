#include "TankDriveTwoSticks.h"
#include "Robot.h"

TankDriveTwoSticks::TankDriveTwoSticks() : CommandBase("TankDriveTwoSticks")
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::drivetrain.get());
}

// Called just before this Command runs the first time
void TankDriveTwoSticks::Initialize()
{
	// Do nothing, things get initialized by IO
}

// Called repeatedly when this Command is scheduled to run
void TankDriveTwoSticks::Execute()
{
	Robot::drivetrain->Drive(Robot::oi->GetLeftStick(), Robot::oi->GetRightStick());
}

// Make this return true when this Command no longer needs to run execute()
bool TankDriveTwoSticks::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void TankDriveTwoSticks::End()
{
	Robot::drivetrain->Drive(0., 0.);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TankDriveTwoSticks::Interrupted()
{
	End();
}
