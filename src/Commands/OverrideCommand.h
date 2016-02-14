#ifndef OverrideCommand_H
#define OverrideCommand_H

#include "WPILib.h"

class OverrideCommand: public Command
{
public:
	OverrideCommand();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
