#include "MoveArm.h"
#include "Robot.h"

MoveArm::MoveArm()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::armElevator.get());
	Requires(Robot::arm.get());
}

// Called just before this Command runs the first time
void MoveArm::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveArm::Execute()
{
	if (Robot::arm->ReturnPIDInput() >= ELEVATOR_UPPER_LIMIT ||
			Robot::arm->ReturnPIDInput() <= ELEVATOR_LOWER_LIMIT)
	{
		// We are not in the acceptable range for the finger, close it and leave it that way.
		// set pushed and previous state to false, since we will allow someone to hold a button to get
		// the first possible hit on the solenoid
		previousState = false;
		Robot::armElevator->Open(previousState);
		Robot::armElevator->SetLocked(true);
		pushedButton = false;
		return;
	}

	// Else, read the button state and unlock.
	bool result = Robot::oi.get()->GetOperatorStick()->GetRawButton(ARM_BUTTON);
	Robot::armElevator->SetLocked(false);

	if (result && !pushedButton)
	{
		previousState = !previousState;
		Robot::armElevator.get()->Open(previousState);
		pushedButton = true;
	}
	else
	{
		pushedButton = false;
	}
}

// Make this return true when this Command no longer needs to run execute()
bool MoveArm::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void MoveArm::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveArm::Interrupted()
{

}


