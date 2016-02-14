#include "MoveWheelieBar.h"
#include "Robot.h"

MoveWheelieBar::MoveWheelieBar()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::wheeliebar.get());
}

// Called just before this Command runs the first time
void MoveWheelieBar::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveWheelieBar::Execute()
{
	bool result = Robot::oi.get()->GetLeftStick()->GetRawButton(WHEELIEBAR_BUTTON);
		Robot::wheeliebar.get()->Open(result);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveWheelieBar::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void MoveWheelieBar::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveWheelieBar::Interrupted()
{

}
