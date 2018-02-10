// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/DriveRobot.h"
#include "Commands/EjectPowerCube.h"
#include "Commands/IntakePowerCube.h"
#include "Commands/LowerArms.h"
#include "Commands/MoveLiftDown.h"
#include "Commands/MoveLiftUp.h"
#include "Commands/RaiseArms.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    logitech.reset(new frc::Joystick(0));
    
    logitechButton6.reset(new frc::JoystickButton(logitech.get(), 6));
    logitechButton6->WhileHeld(new RaiseArms());
    logitechButton5.reset(new frc::JoystickButton(logitech.get(), 5));
    logitechButton5->WhileHeld(new LowerArms());
    logitechButton4.reset(new frc::JoystickButton(logitech.get(), 4));
    logitechButton4->WhileHeld(new MoveLiftDown());
    logitechButton3.reset(new frc::JoystickButton(logitech.get(), 3));
    logitechButton3->WhileHeld(new MoveLiftUp());
    logitechButton2.reset(new frc::JoystickButton(logitech.get(), 2));
    logitechButton2->WhileHeld(new EjectPowerCube());
    logitechButton1.reset(new frc::JoystickButton(logitech.get(), 1));
    logitechButton1->WhileHeld(new IntakePowerCube());

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("Move Lift Down", new MoveLiftDown());
    frc::SmartDashboard::PutData("Move Lift Up", new MoveLiftUp());
    frc::SmartDashboard::PutData("Lower Arms", new LowerArms());
    frc::SmartDashboard::PutData("Raise Arms", new RaiseArms());
    frc::SmartDashboard::PutData("Eject Power Cube", new EjectPowerCube());
    frc::SmartDashboard::PutData("Intake Power Cube", new IntakePowerCube());
    frc::SmartDashboard::PutData("Drive Robot", new DriveRobot());
    frc::SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<frc::Joystick> OI::getLogitech() {
   return logitech;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
