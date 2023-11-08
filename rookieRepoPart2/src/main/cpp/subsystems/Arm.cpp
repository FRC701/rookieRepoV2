// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Arm.h"

Arm::Arm(WPI_TalonFX& ID1, WPI_CANCoder& ID2)
:ArmMotor(ID1)
,ArmCanCoder(ID2)
{
    ArmMotor.ConfigRemoteFeedbackFilter(ArmCanCoder, 0);
}
// This method will be called once per scheduler run
void Arm::Periodic() {}

double Arm:: Sped(double MotorSpeed){
    ArmMotor. Set(ControlMode::Position, MotorSpeed);
    return MotorSpeed;
}