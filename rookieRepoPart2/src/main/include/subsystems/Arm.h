// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "ctre/Phoenix.h"
class Arm : public frc2::SubsystemBase {
 public:
  Arm(WPI_TalonFX& ID1, WPI_CANCoder& ID2);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;
double Sped(double MotorSpeed);
bool isLimitSwitchHit();
 private:
 
 WPI_TalonFX& ArmMotor;
 WPI_CANCoder& canCoder;
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
