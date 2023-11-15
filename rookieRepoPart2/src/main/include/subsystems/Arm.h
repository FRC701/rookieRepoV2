// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "ctre/Phoenix.h"
class Arm : public frc2::SubsystemBase {
 public:
  Arm(WPI_TalonFX& ID1, WPI_CANCoder& ID2, WPI_TalonFX& ID3);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;
double motorSpeed(double MotorSpeed);
bool isLimitSwitchHit();
double setVelocity(double velocity);
double percentOutput(double MotorSpeed);
double motorSpeed2(double MotorSpeed);
double getPosition();
double canGetPosition();
double getVelocity();
 private:
 
 WPI_TalonFX& ArmMotor;
 WPI_CANCoder& canCoder;
 WPI_TalonFX& ArmMotor2;
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
