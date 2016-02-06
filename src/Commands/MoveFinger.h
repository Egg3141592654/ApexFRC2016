#ifndef MoveFinger_H
#define MoveFinger_H

#include "../CommandBase.h"
#include "WPILib.h"

class MoveFinger: public CommandBase
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
