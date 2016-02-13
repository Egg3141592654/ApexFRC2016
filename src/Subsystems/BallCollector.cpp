#include "BallCollector.h"
#include "../RobotMap.h"

BallCollector::BallCollector() :
		Subsystem("BallCollector")
{
feeder.reset(new Talon(MOTOR_PORT));
}

void BallCollector::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new MoveBallCollector());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void BallCollector::ReleaseBall()
{
feeder->Set(.2);
}
void BallCollector::Stop()
{
feeder->Set(0);
}
void BallCollector::IngestBall()
{
feeder->Set(-.2);
}

