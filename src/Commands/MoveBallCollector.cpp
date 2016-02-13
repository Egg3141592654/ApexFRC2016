#include "MoveBallCollector.h"
#include "Robot.h"

MoveBallCollector::MoveBallCollector() : Command("MoveBallCollector")
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::ballCollector.get());
}

// Called just before this Command runs the first time
void MoveBallCollector::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveBallCollector::Execute()
{
	if(Robot::oi->GetRightStick()->GetRawButton(FEEDER_FOREWARD))
	{
		Robot::ballCollector->ReleaseBall();
	}
	else if (Robot::oi->GetRightStick()->GetRawButton(FEEDER_STOP))
	{
		Robot::ballCollector->Stop();
	}
	else if (Robot::oi->GetRightStick()->GetRawButton(FEEDER_INGEST))
	{
		Robot::ballCollector->IngestBall();
	}
	else
	{
		// Do nothing
	}
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
