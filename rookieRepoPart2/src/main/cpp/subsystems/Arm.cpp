// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Arm.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <ctre/Phoenix.h>

Arm::Arm(WPI_TalonFX& ID1, WPI_CANCoder& ID2, WPI_TalonFX& ID3)
    :ArmMotor(ID1),
     canCoder(ID2),
     ArmMotor2(ID3)
{
    ArmMotor.ConfigRemoteFeedbackFilter(canCoder, 0);

}
// This method will be called once per scheduler run
void Arm::Periodic()
{
    frc::SmartDashboard::PutNumber("ArmAngle", canGetPosition());
    frc::SmartDashboard::PutNumber("ArmAngle", 3);
    frc::SmartDashboard::PutBoolean("ifSwitchHit", isLimitSwitchHit());
    frc::SmartDashboard::PutNumber("getPosition", getPosition());
    frc::SmartDashboard::PutNumber("getVelocity", getVelocity());
}

double Arm:: motorSpeed(double MotorSpeed)
{
    ArmMotor.Set(ControlMode::Position, MotorSpeed);
    return MotorSpeed;
}

bool Arm:: isLimitSwitchHit()
{
    return ArmMotor.IsFwdLimitSwitchClosed();
}

double Arm:: setVelocity(double velocity)
{
    ArmMotor2.Set(ControlMode::Velocity, velocity);
    return velocity;
}

double Arm:: percentOutput(double MotorSpeed)
{
    ArmMotor2.Set(ControlMode::PercentOutput, MotorSpeed);
    return MotorSpeed;
}

double Arm:: motorSpeed2(double MotorSpeed)
{
    ArmMotor2.Set(ControlMode::Position, MotorSpeed);
    return MotorSpeed;
}

double Arm:: getPosition()
{
    return ArmMotor2.GetSelectedSensorPosition();
}

double Arm:: canGetPosition()
{
    return canCoder.GetAbsolutePosition();  
}

double Arm:: getVelocity()
{
    return ArmMotor2.GetSelectedSensorVelocity();
}