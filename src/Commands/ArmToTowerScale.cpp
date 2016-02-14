#include "ArmToTowerScale.h"
#include "Robot.h"

ArmToTowerScale::ArmToTowerScale() : Command("ArmToTowerScale")
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::armElevator.get());
}

// Called just before this Command runs the first time
void ArmToTowerScale::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ArmToTowerScale::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ArmToTowerScale::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ArmToTowerScale::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmToTowerScale::Interrupted()
{

}
