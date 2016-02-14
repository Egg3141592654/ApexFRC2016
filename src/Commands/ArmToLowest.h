#ifndef ArmToLowest_H
#define ArmToLowest_H

#include "../CommandBase.h"
#include "WPILib.h"

class ArmToLowest: public CommandBase
{
public:
	ArmToLowest();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
