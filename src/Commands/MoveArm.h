#ifndef MoveArm_H
#define MoveArm_H

#include "WPILib.h"

#include "RobotMap.h"

class MoveArm : public Command
{
private:
	bool previousState = false;
	bool pushedButton = false;

public:
	MoveArm();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
