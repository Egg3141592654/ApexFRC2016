#ifndef MoveFinger_H
#define MoveFinger_H

#include "WPILib.h"
#include "RobotMap.h"

class MoveFinger: public Command
{
public:
	MoveFinger();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
