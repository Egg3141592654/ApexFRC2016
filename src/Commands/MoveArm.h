#ifndef MoveArm_H
#define MoveArm_H

#include "WPILib.h"

#include "RobotMap.h"

class MoveArm : public Command
{
public:
	MoveArm();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
