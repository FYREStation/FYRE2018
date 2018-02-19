// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "Arms.h"
#include "../RobotMap.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Arms::Arms() : frc::Subsystem("Arms")
{
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    leftArmMotor = RobotMap::armsLeftArmMotor;
    rightArmMotor = RobotMap::armsRightArmMotor;
    hingeMotor = RobotMap::armsHingeMotor;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Arms::InitDefaultCommand()
{
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void Arms::Periodic()
{
    // Put code here to be run every loop

}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Arms::SpinWheelsForward()
{
	leftArmMotor->Set(0.6);
	rightArmMotor->Set(0.6);
}

void Arms::SpinWheelsBackward()
{
	leftArmMotor->Set(-0.6);
	rightArmMotor->Set(-0.6);
}

void Arms::StopSpinning()
{
	leftArmMotor->StopMotor();
	rightArmMotor->StopMotor();
}

void Arms::LowerArms()
{
	hingeMotor->Set(0.50);
}

void Arms::RaiseArms()
{
	hingeMotor->Set(-0.50);
}

void Arms::StopMovingArms()
{
	hingeMotor->StopMotor();
}
