#include "MoveWheelieBar.h"
#include "Robot.h"

MoveWheelieBar::MoveWheelieBar()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::wheeliebar.get());
	Requires(Robot::arm.get());
}

// Called just before this Command runs the first time
void MoveWheelieBar::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveWheelieBar::Execute()
{
	if (Robot::arm->ReturnPIDInput() >= WHEELIE_UPPER_LIMIT ||
				Robot::arm->ReturnPIDInput() <= WHEELIE_LOWER_LIMIT)
	{
		// just reject even moving this.
		previousState = false;
		buttonPressed = false;
		Robot::wheeliebar.get()->Open(previousState);
		Robot::wheeliebar.get()->SetLocked(true);
		return;
	}

	Robot::wheeliebar->SetLocked(false);
	bool result = Robot::oi.get()->GetOperatorStick()->GetRawButton(WHEELIEBAR_BUTTON);

	if (result && !buttonPressed)
	{
		previousState = !previousState;
		Robot::wheeliebar.get()->Open(previousState);
		buttonPressed = true;
		return;
	}
	else if(!result)
	{
		buttonPressed = false;
	}
	else
	{
		// Do nothing, button held or not pressed at all.
	}
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
