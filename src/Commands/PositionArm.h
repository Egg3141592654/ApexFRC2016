#ifndef PositionArm_H
#define PositionArm_H

#include "WPILib.h"

class PositionArm: public Command
{
public:
	PositionArm();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
