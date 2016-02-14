#ifndef ArmToLowest_H
#define ArmToLowest_H

#include "WPILib.h"

class ArmToLowest: public Command
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
