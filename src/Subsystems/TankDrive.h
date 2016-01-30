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

	// Constants for the motor ports.
	// Edit these if the motor ports change.
	const int LEFT_FRONT_MOTOR = 1;
	const bool LEFT_FRONT_REVERSED = true;
	const int LEFT_BACK_MOTOR = 2;
	const bool LEFT_BACK_REVERSED = true;
	const int RIGHT_FRONT_MOTOR = 3;
	const bool RIGHT_REVERSED = false;
	const int RIGHT_BACK_MOTOR = 4;
	const bool RIGHT_BACK_REVERSED = false;

	// The drive pointer, this needs to be freed at some point, you know...
	RobotDrive * drive;

public:
	TankDrive();
	void InitDefaultCommand();
	void Drive(float, float);
	void Drive(Joystick *, Joystick *);
};

#endif
