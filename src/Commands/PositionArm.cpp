#include "PositionArm.h"
#include "Robot.h"

PositionArm::PositionArm() : Command("PositionArm")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::arm.get());
}

// Called just before this Command runs the first time
void PositionArm::Initialize()
{
	// We don't want to override state...
}

// Called repeatedly when this Command is scheduled to run
void PositionArm::Execute()
{
	// Determine which button is pushed. There is a presidence here (for low values)
	if (Robot::oi->GetLeftStick()->GetRawButton(ARM_PICKUP_BUTTON))
	{
		Robot::arm->SetNewPosition(ARM_PICKUP_POSITION);
	}
	else if(Robot::oi->GetLeftStick()->GetRawButton(ARM_LOW_BUTTON))
	{
		Robot::arm->SetNewPosition(ARM_LOW_POSITION);
	}
	else if(Robot::oi->GetLeftStick()->GetRawButton(ARM_CARRY_BUTTON))
	{
		Robot::arm->SetNewPosition(ARM_CARRY_POSITION);
	}
	else if(Robot::oi->GetLeftStick()->GetRawButton(ARM_DRAWBRIDGE_BUTTON))
	{
		Robot::arm->SetNewPosition(ARM_DRAWBRIDGE_POSITION);
	}
	else if(Robot::oi->GetLeftStick()->GetRawButton(ARM_HANG_BUTTON))
	{
		Robot::arm->SetNewPosition(ARM_HANG_POSITION);
	}
	else
	{
		// Do nothing
	}

	// See of there is any offset set by the operator.
	Robot::arm->SetNewPosition(Robot::oi->GetLeftStick()->GetRawAxis(ARM_ADJUST_AXIS));
}

// Make this return true when this Command no longer needs to run execute()
bool PositionArm::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PositionArm::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PositionArm::Interrupted()
{

}
