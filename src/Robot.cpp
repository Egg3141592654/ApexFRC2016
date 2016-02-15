#include "WPILib.h"
#include "Robot.h"

std::shared_ptr<TankDrive> Robot::drivetrain;
std::shared_ptr<Pneumatics> Robot::pneumatics;
std::shared_ptr<Finger> Robot::finger;
std::shared_ptr<Arm> Robot::arm;
std::shared_ptr<WheelieBar> Robot::wheeliebar;
std::shared_ptr<ArmElevator> Robot::armElevator;

std::shared_ptr<OI> Robot::oi;

void Robot::RobotInit()
{
	drivetrain.reset(new TankDrive());
	pneumatics.reset(new Pneumatics());
	finger.reset(new Finger());
	arm.reset(new Arm());
	wheeliebar.reset(new WheelieBar());
	armElevator.reset(new ArmElevator());
	oi.reset(new OI());

	pneumatics->Start();
}

/**
 * This function is called once each time the robot enters Disabled mode.
 * You can use it to reset any subsystem information you want to clear when
 * the robot is disabled.
 */
void Robot::DisabledInit()
{
}

void Robot::DisabledPeriodic()
{
	Scheduler::GetInstance()->Run();
}

/**
 * This autonomous (along with the chooser code above) shows how to select between different autonomous modes
 * using the dashboard. The sendable chooser code works with the Java SmartDashboard. If you prefer the LabVIEW
 * Dashboard, remove all of the chooser code and uncomment the GetString code to get the auto name from the text box
 * below the Gyro
 *
 * You can add additional auto modes by adding additional commands to the chooser code above (like the commented example)
 * or additional comparisons to the if-else structure below with additional strings & commands.
 */
void Robot::AutonomousInit()
{
	/* std::string autoSelected = SmartDashboard::GetString("Auto Selector", "Default");
	if(autoSelected == "My Auto") {
		autonomousCommand.reset(new MyAutoCommand());
	} else {
		autonomousCommand.reset(new ExampleCommand());
	} */
}

void Robot::AutonomousPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit()
{
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// this line or comment it out.
}

void Robot::TeleopPeriodic()
{
	Scheduler::GetInstance()->Run();
	Log();
}

void Robot::TestPeriodic()
{
	LiveWindow::GetInstance()->Run();
}

/**
 * Use this method to log critical system functionality periodicly here.
 */
void Robot::Log()
{
	SmartDashboard::PutNumber("Target Arm Position", arm->GetSetpoint());
	SmartDashboard::PutNumber("Current Arm Position", arm->ReturnPIDInput());
	SmartDashboard::PutString("Finger status", finger->GetStatus());
	SmartDashboard::PutString("Elevator Status", armElevator->GetStatus());
	SmartDashboard::PutString("Wheelie Status", wheeliebar->GetStatus());
}

START_ROBOT_CLASS(Robot)

