/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Drive/DifferentialDrive.h>
#include <IterativeRobot.h>
#include <Joystick.h>
#include <LiveWindow/LiveWindow.h>
#include <Spark.h>
#include <Timer.h>
#include <PWMSpeedController.h>

#define ARMS_OUT	1
#define ARMS_IN		2

class Robot : public frc::IterativeRobot {
public:
	Robot() {
		m_robotDrive.SetExpiration(0.1);
		m_timer.Start();

		arm_left.SetInverted(true);
	}

	void AutonomousInit() override {
		m_timer.Reset();
		m_timer.Start();
	}

	void AutonomousPeriodic() override {
		// Drive for 2 seconds
		if (m_timer.Get() < 2.0) {
			// Drive forwards half speed
			m_robotDrive.ArcadeDrive(-0.5, 0.0);
		} else {
			// Stop robot
			m_robotDrive.ArcadeDrive(0.0, 0.0);
		}
	}

	void TeleopInit() override {}

	void TeleopPeriodic() override {
		// Drive with arcade style (use right stick)
		m_robotDrive.ArcadeDrive(m_stick.GetY(), m_stick.GetX());
		if(m_stick.GetRawButton(ARMS_OUT) == true)
		{
			arm_left.Set(0.5);
			arm_right.Set(0.5);
		}
		else if(m_stick.GetRawButton(ARMS_IN) == true)
		{
			arm_left.Set(-0.5);
			arm_right.Set(-0.5);
		}
		else
		{
			arm_left.Set(0);
			arm_right.Set(0);
		}
		//m_robotArms.ArcadeDrive();

	}

	void TestPeriodic() override {}

private:
	// Robot drive system
	frc::Spark m_left{0};
	frc::Spark m_right{1};
	frc::DifferentialDrive m_robotDrive{m_left, m_right};
	//Robot arm system
	frc::Spark arm_left{2};
	frc::Spark arm_right{3};

	frc::Joystick m_stick{0};
	frc::LiveWindow& m_lw = *frc::LiveWindow::GetInstance();
	frc::Timer m_timer;
};

START_ROBOT_CLASS(Robot)
