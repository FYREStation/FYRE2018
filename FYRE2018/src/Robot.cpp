// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "Robot.h"

/******************************************************************************/
/*                             Overview of Controls                           */
/******************************************************************************/
/* XBox                                Driving                                */
/* ---------------------------------------------------------------------------*/
/* Left Trigger or Right Trigger       Throttle for driving                   */
/* Start Button                        Toggle Arcade Drive and Tank Drive     */
/*                                          *Default is Arcade Drive          */
/* Left Stick or/and Right Stick       Arcade Drive or Tank Drive             */
/* A Button                            Hold to view back camera               */
/******************************************************************************/
/* Logitech Joystick                   Manipulating                           */
/* ---------------------------------------------------------------------------*/
/* Throttle                            Throttle for moving lift               */
/* Button 3 + Joystick Y Axis          Move lift up and down (forward is up)  */
/*                                          *Hold button and tilt             */
/* Button 2 (thumb button)             Intake Cube                            */
/* Trigger                             Eject Cube                             */
/* Button 4                            Raise arms                             */
/* Button 6                            Lower arms                             */
/* Button 11                           Raise servo                            */
/* Button 12                           Lower servo                            */
/******************************************************************************/

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION

std::shared_ptr<DriveTrain> Robot::driveTrain;
std::shared_ptr<Arms> Robot::arms;
std::shared_ptr<Lift> Robot::lift;
std::shared_ptr<CubeHolder> Robot::cubeHolder;
std::unique_ptr<OI> Robot::oi;

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION

void Robot::RobotInit()
{
	RobotMap::init();

	// Camera Initialization
	frontCamera = CameraServer::GetInstance()->StartAutomaticCapture( 0 );
	backCamera = CameraServer::GetInstance()->StartAutomaticCapture( 1 );
	frontSink = new cs::CvSink("frontCamCv");
	frontSink.SetSource( frontCamera );
	frontSink.SetEnabled( true );
	backSink = new cs::CvSink("backCamCv");
	backSink.SetSource( backCamera );
	backSink.SetEnabled( true );
	server = CameraServer::GetInstance()->GetServer();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

    driveTrain.reset(new DriveTrain());
    SmartDashboard::PutData(driveTrain.get());
    arms.reset(new Arms());
    SmartDashboard::PutData(arms.get());
    lift.reset(new Lift());
    SmartDashboard::PutData(lift.get());
    cubeHolder.reset(new CubeHolder());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

    // This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.

    oi.reset(new OI());

    // Add commands to Autonomous Sendable Chooser

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS

	chooser.AddObject("Autonomous Command", new AutonomousCommand());
	chooser.AddObject("Switch Auto", new SwitchAuto());

	chooser.AddDefault("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS

	frc::SmartDashboard::PutData("Auto Modes", &chooser);
}

/**
 * This function is called when the disabled button is hit.
 * You can use it to reset subsystems before shutting down.
 */
void Robot::DisabledInit()
{

}

void Robot::DisabledPeriodic()
{
	frc::Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit()
{
	autonomousCommand = chooser.GetSelected();
	autonomousCommand = new AutonomousCommand(); // Testing to see if this will operate on startup
	if (autonomousCommand != nullptr)
	{
		autonomousCommand->Start();
	}
}

void Robot::AutonomousPeriodic()
{
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit()
{
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// these lines or comment it out.
	if (autonomousCommand != nullptr)
	{
		autonomousCommand->Cancel();
	}
}

void Robot::TeleopPeriodic()
{
	frc::Scheduler::GetInstance()->Run();
}

START_ROBOT_CLASS(Robot);

