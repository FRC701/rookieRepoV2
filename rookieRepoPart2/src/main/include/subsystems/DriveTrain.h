// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>
#include <frc/drive/DifferentialDrive.h>


class DriveTrain : public frc2::SubsystemBase {
 public:
  DriveTrain(WPI_TalonFX& ID1, WPI_TalonFX& ID2, WPI_TalonFX& ID3, WPI_TalonFX& ID4);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void TankDrive(double left, double right);



double motorSpeed(double MotorSpeed);
double motorSpeed2(double MotorSpeed);
double motorSpeed3(double MotorSpeed);
double motorSpeed4(double MotorSpeed);
double motorRun(double MotorSpeed);
 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  WPI_TalonFX& MotorOne;
  WPI_TalonFX& MotorTwo;
  WPI_TalonFX& MotorThree;
  WPI_TalonFX& MotorFour;
  frc::DifferentialDrive mDrive;
};


/*
      |\      _,,,---,,_
ZZZzz /,`.-'`'    -.  ;-;;,_
     |,4-  ) )-,_. ,\ (  `'-'
    '---''(_/--'  `-'\_)
*/