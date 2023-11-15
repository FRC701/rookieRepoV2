// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Intake.h"

Intake::Intake(WPI_TalonFX& ID1)
    : IntakeMotor(ID1)
{
}

// This method will be called once per scheduler run
void Intake::Periodic() {}

//This function sets the intake motor's speed
double Intake:: setSpeed(double MotorSpeed)
{
    IntakeMotor.Set(MotorSpeed);
    return MotorSpeed;
}
