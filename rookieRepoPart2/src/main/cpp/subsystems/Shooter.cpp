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
frc::SmartDashboard::PutBoolean("IsLimitSwitchHit" ,IsFwdLimitSwitchHit());

}

double Shooter::SETspeed(double Velocity)
{
    ShooterM1.Set(ControlMode::Velocity, Velocity);
    return Velocity;
}

bool Shooter:: IsFwdLimitSwitchHit()
{
    return ShooterM1.IsFwdLimitSwitchClosed();
};

double Shooter:: PercentOutput(double Motorspeed)
{
    ashootermm1.Set(ControlMode::PercentOutput, Motorspeed);
    return Motorspeed;
}

double Shooter:: ShooterStand(double Position)
{
    ShooterM1.Set(ControlMode::Position, Position);
    return Position;
}

double Shooter:: ShooterVelocity()
{
   return ashootermm1.GetSelectedSensorVelocity();
}

bool Shooter:: Check(int x)

{
if(x==5)
    return true; {
        return false;
    }
}
