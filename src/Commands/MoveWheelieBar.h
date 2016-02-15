#ifndef MoveWheelieBar_H
#define MoveWheelieBar_H

#include "WPILib.h"

class MoveWheelieBar: public Command
{
private:
	bool previousState = false;
	bool buttonPressed = false;
public:
	MoveWheelieBar();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
