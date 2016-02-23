#include "MoveBallCollector.h"
#include "Robot.h"

MoveBallCollector::MoveBallCollector() : Command("MoveBallCollector")
{
	// Use Requires() here to declare subsystem dependencies
	printf("MoveBallCollector \n");
	Requires(Robot::ballCollector.get());
}

// Called just before this Command runs the first time
void MoveBallCollector::Initialize()
{
	printf("gonna move collector \n");
}

// Called repeatedly when this Command is scheduled to run
void MoveBallCollector::Execute()
{
	if(Robot::oi->GetRightStick()->GetRawButton(FEEDER_FORWARD))
	{
		printf("feed forward \n");
		Robot::ballCollector->ReleaseBall();
	}
	else if (Robot::oi->GetRightStick()->GetRawButton(FEEDER_STOP))
	{
		printf("feed stop \n");
		Robot::ballCollector->Stop();
	}
	else if (Robot::oi->GetRightStick()->GetRawButton(FEEDER_INGEST))
	{
		printf("feed ingest \n");
		Robot::ballCollector->IngestBall();
	}
	else
	{
		// Do nothing
	}

//	printf("executing PositionArm \n \n \n");
	// Determine which button is pushed. There is a presidence here (for low values)
	if (Robot::oi->GetOperatorStick()->GetRawButton(ARM_PICKUP_BUTTON))
	{
		Robot::arm->SetNewPosition(ARM_PICKUP_POSITION);
	}
	else if(Robot::oi->GetOperatorStick()->GetRawButton(ARM_LOW_BUTTON))
	{
		Robot::arm->SetNewPosition(ARM_LOW_POSITION);
	}
	else if(Robot::oi->GetOperatorStick()->GetRawButton(ARM_CARRY_BUTTON))
	{
		Robot::arm->SetNewPosition(ARM_CARRY_POSITION);
	}
	else if(Robot::oi->GetOperatorStick()->GetRawButton(ARM_DRAWBRIDGE_BUTTON))
	{
		Robot::arm->SetNewPosition(ARM_DRAWBRIDGE_POSITION);
	}
	else if(Robot::oi->GetOperatorStick()->GetRawButton(ARM_HANG_BUTTON))
	{
		Robot::arm->SetNewPosition(ARM_HANG_POSITION);
	}
	else
	{
		// Do nothing

	}

	// See of there is any offset set by the operator.
	Robot::arm->SetNewRelativePosition(Robot::oi->GetOperatorStick());

}

// Make this return true when this Command no longer needs to run execute()
bool MoveBallCollector::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void MoveBallCollector::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveBallCollector::Interrupted()
{

}
