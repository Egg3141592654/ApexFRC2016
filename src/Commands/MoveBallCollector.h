#ifndef MoveBallCollector_H
#define MoveBallCollector_H

#include "WPILib.h"

#include "RobotMap.h"

class MoveBallCollector: public Command
{
public:
	MoveBallCollector();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
