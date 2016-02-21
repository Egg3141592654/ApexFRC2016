#ifndef BallCollector_H
#define BallCollector_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

#include "Commands/MoveBallCollector.h"

class BallCollector: public Subsystem
{
private:
	std::shared_ptr<VictorSP>feeder;

public:
	BallCollector();
	void InitDefaultCommand();
	void ReleaseBall();
	void Stop();
	void IngestBall();
};

#endif
