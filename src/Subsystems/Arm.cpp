#include "Arm.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"

Arm::Arm() :
		PIDSubsystem("Arm", 1.0, 0.0, 0.0)
{
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.

	// Create the analog control before starting the PID loop.
	controlPot.reset(new AnalogInput(PID_CONTROL));

	// Create the motor objects first before starting up the arm
	motor1.reset(new Talon(ARM_MOTOR_1));
	motor2.reset(new Talon(ARM_MOTOR_2));

	// Set motor inversions correctly
	motor1->SetInverted(ARM_MOTOR_1_REVERSED);
	motor2->SetInverted(ARM_MOTOR_2_REVERSED);

	// Add this to the smart window? This is awesome!
	LiveWindow::GetInstance()->AddSensor("Arm", "Arm Control Pot", controlPot.get());

	// ALWAYS SET A PID SYSTEM TO A START POINT!
	SetSetpoint(ARM_START_POSITION);

	Enable();
}

double Arm::ReturnPIDInput()
{
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;

	// TODO: Get logic line voltage from myRIO. For now, use 5
	return controlPot->GetAverageVoltage() / 5.0;
}

void Arm::UsePIDOutput(double output)
{
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);

	// Cap the values at 1 so nothing strange happens
	if (output > 1)
	{
		output = 1.;
	}

	// Write speed to the motors. Note that we don't have to reverse them since we took care of that already.
	motor1->Set((float)output);
	motor2->Set((float)output);
}

void Arm::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	// There is no default command for this subsystem. Many will call here.
}
