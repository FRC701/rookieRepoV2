// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveTrain.h"


DriveTrain::DriveTrain(WPI_TalonFX& ID1, WPI_TalonFX& ID2, WPI_TalonFX& ID3, WPI_TalonFX& ID4)
        : MotorOne(ID1),
          MotorTwo(ID2),
          MotorThree(ID3),
          MotorFour(ID4),
          mDrive(MotorOne,MotorTwo)
{
    MotorThree.Follow(MotorOne);
    MotorFour.Follow(MotorTwo);

}

// This method will be called once per scheduler run
void DriveTrain::Periodic() {}

void DriveTrain::TankDrive(double left, double right) 
{
    mDrive.TankDrive(left, right);
}

double DriveTrain:: motorSpeed(double MotorSpeed)
{
    MotorOne.Set(MotorSpeed);
    return MotorSpeed;
}

double DriveTrain:: motorSpeed2(double MotorSpeed)
{
    MotorTwo.Set(MotorSpeed);
    return MotorSpeed;
}

double DriveTrain:: motorSpeed3(double MotorSpeed)
{
    MotorThree.Set(MotorSpeed);
    return MotorSpeed;
}

double DriveTrain:: motorSpeed4(double MotorSpeed)
{
    MotorFour.Set(MotorSpeed);
    return MotorSpeed;
}

double DriveTrain:: motorRun(double MotorSpeed)
{
    MotorOne.Set(MotorSpeed);
    MotorTwo.Set(MotorSpeed);
    MotorThree.Set(MotorSpeed);
    MotorFour.Set(MotorSpeed);
    return MotorSpeed;
}

