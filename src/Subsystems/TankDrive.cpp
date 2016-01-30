#include "TankDrive.h"
#include "../RobotMap.h"

TankDrive::TankDrive() :
		Subsystem("TankDrive")
{
	// Initialize the robot drive. The constructor is documented at
	// http://first.wpi.edu/FRC/roborio/release/docs/cpp/classRobotDrive.html#a47180c144fcca9e7550f7cb906c8b79a
	drive = new RobotDrive(
			new Talon(LEFT_FRONT_MOTOR),
			new Talon(LEFT_BACK_MOTOR),
			new Talon(RIGHT_FRONT_MOTOR),
			new Talon(RIGHT_BACK_MOTOR));

	// Modify the robot drive bases to be in the correct orientation
	// Reverse the motors that need to be reversed...
	drive->SetInvertedMotor(drive->kFrontLeftMotor, LEFT_FRONT_REVERSED);
	drive->SetInvertedMotor(drive->kRearLeftMotor, LEFT_BACK_REVERSED);
	drive->SetInvertedMotor(drive->kFrontRightMotor, LEFT_FRONT_REVERSED);
	drive->SetInvertedMotor(drive->kRearRightMotor, RIGHT_BACK_MOTOR);
}

void TankDrive::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new TankDriveTwoSticks());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

/**
 * This method will call the RobotDrive class' method TankDrive
 * and will drive the robot given the two motor values.
 */
void TankDrive::Drive(float left, float right)
{
	drive->TankDrive(left, right);
}

/**
 *	Reads in the joystick values from the driver station and extracts
 * 	the Y axes.
 */
void TankDrive::Drive(Joystick * leftStick, Joystick * rightStick)
{
	drive->TankDrive(leftStick->GetY(), rightStick->GetY());
}
