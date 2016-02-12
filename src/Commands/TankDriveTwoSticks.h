#ifndef TankDriveTwoSticks_H
#define TankDriveTwoSticks_H

#include "WPILib.h"

class TankDriveTwoSticks: public Command
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
