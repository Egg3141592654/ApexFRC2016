#ifndef MoveWheelieBar_H
#define MoveWheelieBar_H

#include "WPILib.h"

class MoveWheelieBar: public Command
{
public:
	MoveWheelieBar();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
