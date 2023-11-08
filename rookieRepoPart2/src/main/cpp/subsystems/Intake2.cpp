// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Intake2.h"

Intake2::Intake2(WPI_TalonFX& ID2)
    : IntakeMotor2(ID2)
{
}

// This method will be called once per scheduler run
void Intake2::Periodic() {}

double Intake2::setSpeed(double MotorSpeed)
{
    IntakeMotor2.Set(MotorSpeed);
}
