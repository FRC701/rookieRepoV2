// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>

class Turret : public frc2::SubsystemBase {
 public:
 Turret(WPI_TalonFX& skycastle, WPI_TalonFX& TMotor2,  WPI_Pigeon2& TGyro);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;
  double Spinspeed(double position);
  bool IsFwdLimitSwitchHit();
  double TurretVelocity(double velocity);
  double PercentOutput(double motorspeed);
  double TurretPosition();
  double TVelocity();
  double Check(int x);

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  WPI_TalonFX& skycastle;
  WPI_TalonFX& TMotor2;
  WPI_Pigeon2& TGyro;
};
