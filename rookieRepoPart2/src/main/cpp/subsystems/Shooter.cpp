// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <ctre/Phoenix.h>

Shooter::Shooter(WPI_TalonFX &ID1)
    : ShooterM1(ID1)
{
}

// This method will be called once per scheduler run
void Shooter::Periodic() {
frc::SmartDashboard::PutNumber("ShooterRPM" ,ShooterM1.GetSelectedSensorVelocity());
frc::SmartDashboard::PutNumber("ShooterRPM" , 3);

}

double Shooter::SETspeed(double Motorspeed)
{
    ShooterM1.Set(ControlMode::Velocity, Motorspeed);
    return Motorspeed;
}

bool Shooter:: isLimitSwitchHit()
{
    return ShooterM1.IsFwdLimitSwitchClosed();
}