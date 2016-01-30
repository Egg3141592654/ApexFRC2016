#ifndef TankDriveTwoSticks_H
#define TankDriveTwoSticks_H

#include "../CommandBase.h"
#include "WPILib.h"

class TankDriveTwoSticks: public CommandBase
{
public:
	TankDriveTwoSticks();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
