#include "MoveArm.h"
#include "Robot.h"

MoveArm::MoveArm()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::armElevator.get());
	Requires(Robot::arm.get());
	//Requires(Robot::GetFinger());
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
		printf ("previous state to false");
		previousState = false;
		printf("next is robot armElevator Open(previousState)");
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
	else if (!result)
	{
		pushedButton = false;
	}
	else
	{
		// Do nothing, button is held or not pressed at all.
	}
	// Else, read the button state and unlock.
	bool result2 = Robot::oi.get()->GetLeftStick()->GetRawButton(ARM_BUTTON2);
	Robot::armElevator->SetLocked(false);

	if (result2 && !pushedButton2)
	{
		previousState2 = !previousState2;
		Robot::armElevator.get()->Open(previousState2);
		pushedButton2 = true;
	}
	else if (!result2)
	{
		pushedButton2 = false;
	}
	else
	{
		// Do nothing, button is held or not pressed at all.
	}

	// Else, read the button state and unlock.
	bool resultFinger = Robot::oi.get()->GetOperatorStick()->GetRawButton(FINGER_BUTTON);
	//Robot::GetFinger()->SetLocked(false);

	if (resultFinger && !pBFinger)
	{
		pSFinger = !pSFinger;
	//	Robot::GetFinger()->Open(pSFinger);
		pBFinger = true;
	}
	else if (!resultFinger)
	{
		pBFinger = false;
	}
	else
	{
		// Do nothing, button is held or not pressed at all.
	}

	// Else, read the button state and unlock.
	bool resultFinger2 = Robot::oi.get()->GetLeftStick()->GetRawButton(FINGER_BUTTON2);

	if (resultFinger2 && !pBFinger2)
	{
		pSFinger2 = !pSFinger2;
	//	Robot::GetFinger()->Open(pSFinger2);
		pBFinger2 = true;
	}
	else if (!resultFinger2)
	{
		pBFinger2 = false;
	}
	else
	{
		// Do nothing, button is held or not pressed at all.
	}

	// Else, read the button state and unlock.
	bool resultWheelieBar = Robot::oi.get()->GetOperatorStick()->GetRawButton(WHEELIEBAR_BUTTON);
	Robot::wheeliebar->SetLocked(false);

	if (resultWheelieBar && !pBWheelieBar)
	{
		pSWheelieBar = !pSWheelieBar;
		Robot::wheeliebar.get()->Open(pSWheelieBar);
		pBWheelieBar= true;
	}
	else if (!resultWheelieBar)
	{
		pBWheelieBar = false;
	}
	else
	{
		// Do nothing, button is held or not pressed at all.
	}

	bool resultWheelieBar2 = Robot::oi.get()->GetLeftStick()->GetRawButton(WHEELIEBAR_BUTTON2);
	Robot::wheeliebar->SetLocked(false);

	if (resultWheelieBar2 && !pBWheelieBar2)
	{
		pSWheelieBar2 = !pSWheelieBar2;
		Robot::wheeliebar.get()->Open(pSWheelieBar2);
		pBWheelieBar2= true;
	}
	else if (!resultWheelieBar2)
	{
		pBWheelieBar2 = false;
	}
	else
	{
		// Do nothing, button is held or not pressed at all.
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


