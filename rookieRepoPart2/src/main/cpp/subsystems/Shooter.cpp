// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter.h"

Shooter::Shooter(WPI_TalonFX &ID1)
    : ShooterM1(ID1)
{
}

// This method will be called once per scheduler run
void Shooter::Periodic() {}

double Shooter::SETspeed(double Motorspeed)
{
    ShooterM1.Set(ControlMode::Velocity, Motorspeed);
    return Motorspeed;
}