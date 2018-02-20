// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
	public:
		OI();

		// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<frc::Joystick> getLogitech();
	std::shared_ptr<frc::Joystick> getXBox();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	private:
		// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	
	
	
	
	
	
	
	
	
	
	
	
	std::shared_ptr<frc::Joystick> xBox;
	std::shared_ptr<frc::JoystickButton> xBoxButton8;
	std::shared_ptr<frc::JoystickButton> xBoxButton1;
	std::shared_ptr<frc::Joystick> logitech;
	std::shared_ptr<frc::JoystickButton> logitechButton10;
	std::shared_ptr<frc::JoystickButton> logitechButton12;
	std::shared_ptr<frc::JoystickButton> logitechButton11;
	std::shared_ptr<frc::JoystickButton> logitechButton6;
	std::shared_ptr<frc::JoystickButton> logitechButton4;
	std::shared_ptr<frc::JoystickButton> logitechButton3;
	std::shared_ptr<frc::JoystickButton> logitechButton2;
	std::shared_ptr<frc::JoystickButton> logitechButton1;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
};

#endif
