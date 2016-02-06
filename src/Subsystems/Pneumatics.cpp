#include "Pneumatics.h"
#include "../RobotMap.h"

/**
 * Initialize the analog input for the compressor limit switch on the port supplied
 * Ensure that the compressor has been instantiated.
 */
Pneumatics::Pneumatics() :
		Subsystem("Pneumatics")
{
	pressureSensor.reset(new AnalogInput(COMPRESSOR_INPUT));
	comp.reset(new Compressor(uint8_t(1)));
}

void Pneumatics::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

/**
 * Fire up the compressor to run infinitely
 */
void Pneumatics::Start()
{
	comp->Start();
}

bool Pneumatics::IsPressurized() {
	return MAX_PRESSURE <= pressureSensor->GetVoltage();
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
