#include "BallCollector.h"
#include "../RobotMap.h"

BallCollector::BallCollector() :
		Subsystem("BallCollector")
{
	feeder.reset(new VictorSP(FEEDER_MOTOR_PORT));
	feeder->SetInverted(FEEDER_MOTOR_REVERSED);
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
feeder->Set(.5);
}
void BallCollector::Stop()
{
feeder->Set(0);
}
void BallCollector::IngestBall()
{
feeder->Set(-.5);
}

