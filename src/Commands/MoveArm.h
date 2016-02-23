#ifndef MoveArm_H
#define MoveArm_H

#include "WPILib.h"

#include "RobotMap.h"

class MoveArm : public Command
{
private:
	bool previousState = false;
	bool pushedButton = false;
	bool previousState2 = false;
	bool pushedButton2 = false;
	bool pSFinger = false;
	bool pBFinger = false;
	bool pSFinger2 = false;
	bool pBFinger2 = false;
	bool pSWheelieBar = false;
	bool pBWheelieBar = false;
	bool pSWheelieBar2 = false;
	bool pBWheelieBar2 = false;

public:
	MoveArm();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
