#include "MoveFinger.h"
#include "Robot.h"

MoveFinger::MoveFinger() : Command("MoveFinger")
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::finger.get());
	Requires(Robot::arm.get());
}

// Called just before this Command runs the first time
void MoveFinger::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveFinger::Execute()
{
	if (Robot::arm->ReturnPIDInput() >= FINGER_UPPER_LIMIT ||
			Robot::arm->ReturnPIDInput() <= FINGER_LOWER_LIMIT)
	{
		previousState = false;
		buttonPressed = false;
		Robot::finger.get()->Open(previousState);
		Robot::finger->SetLocked(true);
	}

	Robot::finger->SetLocked(false);
	bool result= Robot::oi.get()->GetOperatorStick()->GetRawButton(FINGER_BUTTON);

	if (result && !buttonPressed)
	{
		previousState = !previousState;
		Robot::finger.get()->Open(previousState);
		buttonPressed = true;
	}
	else
	{
		buttonPressed = false;
	}
}

// Make this return true when this Command no longer needs to run execute()
bool MoveFinger::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void MoveFinger::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveFinger::Interrupted()
{

}
