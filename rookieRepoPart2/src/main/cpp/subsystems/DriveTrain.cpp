// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveTrain.h"


DriveTrain::DriveTrain(WPI_TalonFX& ID1, WPI_TalonFX& ID2, WPI_TalonFX& ID3, WPI_TalonFX& ID4)
        : mFrontR(ID1),
          mFrontL(ID2),
          mBackR(ID3),
          mBackL(ID4),
          mDrive(mFrontR,mFrontL)
{
    mBackR.Follow(mFrontR);
    mBackL.Follow(mFrontL);
}

// This method will be called once per scheduler run
void DriveTrain::Periodic() {}

void DriveTrain::TankDrive(double left, double right) 
{
    mDrive.TankDrive(left, right);
}

double DriveTrain:: motorSpeed(double MotorSpeed)
{
    mFrontR.Set(MotorSpeed);
    return MotorSpeed;
}

double DriveTrain:: motorSpeed2(double MotorSpeed)
{
    mFrontL.Set(MotorSpeed);
    return MotorSpeed;
}

double DriveTrain:: motorSpeed3(double MotorSpeed)
{
    mBackR.Set(MotorSpeed);
    return MotorSpeed;
}

double DriveTrain:: motorSpeed4(double MotorSpeed)
{
    mBackL.Set(MotorSpeed);
    return MotorSpeed;
}

double DriveTrain:: motorRun(double MotorSpeed)
{
    mFrontR.Set(MotorSpeed);
    mFrontL.Set(MotorSpeed);
    mBackR.Set(MotorSpeed);
    mBackL.Set(MotorSpeed);
    return MotorSpeed;
}

