#ifndef Arm_H
#define Arm_H

#include "Commands/PIDSubsystem.h"
#include "Commands/PositionArm.h"
#include "WPILib.h"

class Arm: public PIDSubsystem
{

private:
	std::shared_ptr<AnalogInput> controlPot;
	std::shared_ptr<Talon> motor1;
	std::shared_ptr<Talon> motor2;

	double SanitizeInput(double);

public:
	Arm();
	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();
	void SetNewPosition(double);
	void SetNewRelativePosition(Joystick *);
};

#endif
