// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandPtr.h>
#include <frc2/command/button/CommandXboxController.h>


#include "Constants.h"
#include "subsystems/ExampleSubsystem.h"

#include "subsystems/Shooter.h"
#include <frc/XboxController.h>

#include "Constants.h"

#include "subsystems/Turret.h"

#include "subsystems/Intake.h"

#include "subsystems/DriveTrain.h"

#include "subsystems/Arm.h"


/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and trigger mappings) should be declared here.
 */
class RobotContainer {
 public:
  RobotContainer();







  using WPI_TalonFX = ctre::phoenix::motorcontrol::can::WPI_TalonFX;

  frc2::CommandPtr GetAutonomousCommand();
  static constexpr int kShooterMotor{7};
  static constexpr int intakeMotor{10};

  static constexpr int kFrontR{0};
  static constexpr int kFrontL{1};
  static constexpr int kBackR{2};
  static constexpr int kBackL{3};

  static constexpr int kTurret{4};

  static constexpr int kArmMotor{4};

 private:
  frc2::CommandXboxController m_driverController{
      OperatorConstants::kDriverControllerPort};
  frc::XboxController driver{0};


  // The robot's subsystems are defined here...
  ExampleSubsystem m_subsystem;



  WPI_TalonFX ShooterM1{kShooterMotor};
  Shooter mShooter{ShooterM1};
  
  WPI_TalonFX skycastle{kTurret};
  Turret mTurret{skycastle};


  WPI_TalonFX IntakeMotor{intakeMotor};
  Intake mIntake{IntakeMotor};

  WPI_TalonFX mFrontR{kFrontR};
  WPI_TalonFX mFrontL{kFrontL};
  WPI_TalonFX mBackR{kBackR};
  WPI_TalonFX mBackL{kBackL};
  DriveTrain mDriveTrain{mFrontR, mFrontL, mBackR, mBackL};
  
  WPI_TalonFX ArmMotor{kArmMotor};
  Arm mArm{ArmMotor};


  void ConfigureBindings();
};
