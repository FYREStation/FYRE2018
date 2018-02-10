// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "WPILib.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<frc::SpeedController> driveTrainLeftDriveMotor;
	static std::shared_ptr<frc::Encoder> driveTrainLeftDriveEncoder;
	static std::shared_ptr<frc::PIDController> driveTrainLeftSide;
	static std::shared_ptr<frc::SpeedController> driveTrainRightDriveMotor;
	static std::shared_ptr<frc::Encoder> driveTrainRightDriveEnoder;
	static std::shared_ptr<frc::PIDController> driveTrainRightSide;
	static std::shared_ptr<frc::SpeedController> armsLeftArmMotor;
	static std::shared_ptr<frc::SpeedController> armsRightArmMotor;
	static std::shared_ptr<frc::SpeedController> armsHingeMotor;
	static std::shared_ptr<frc::SpeedController> liftLiftMotor;
	static std::shared_ptr<frc::AnalogInput> liftDistanceSensor;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();
};
#endif
