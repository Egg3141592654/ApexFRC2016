#ifndef Pneumatics_H
#define Pneumatics_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Pneumatics: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<AnalogInput> pressureSensor;
	const float MAX_PRESSURE = 2.55; //TODO: Need to actually validate this value on the robot.

	std::shared_ptr<Compressor> comp;
public:
	Pneumatics();
	void InitDefaultCommand();
	void Start();
	bool IsPressurized();
};

#endif
