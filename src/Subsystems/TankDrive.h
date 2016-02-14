#ifndef TankDrive_H
#define TankDrive_H

#include "Commands/Subsystem.h"
#include "RobotDrive.h"
#include "WPILib.h"

// Personal include statements
#include "Commands/TankDriveTwoSticks.h"

class TankDrive: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	// The drive pointer, this needs to be freed at some point, you know...
	RobotDrive * drive;

public:
	TankDrive();
	void InitDefaultCommand();
	void Drive(float, float);
	void Drive(Joystick *, Joystick *);
};

#endif
