#include "MoveFinger.h"
#include "Robot.h"

MoveFinger::MoveFinger() : Command("MoveFinger")
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::finger.get());
}

// Called just before this Command runs the first time
void MoveFinger::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveFinger::Execute()
{
	bool result= Robot::oi.get()->GetRightStick()->GetRawButton(FINGER_BUTTON);
	Robot::finger.get()->Open(result);
}

// Make this return true when this Command no longer needs to run execute()
bool MoveFinger::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void MoveFinger::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveFinger::Interrupted()
{

}
