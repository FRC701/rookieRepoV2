// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/TankDrive.h"

TankDrive::TankDrive(DriveTrain& drivetrain,
                     std::function<double()> left,
                     std::function<double()> right)
: mDriveTrain(drivetrain), mLeft(left), mRight(right)
{
  AddRequirements(&mDriveTrain);
}



// Called when the command is initially scheduled.
void TankDrive::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void TankDrive::Execute() 
{
  mDriveTrain.TankDrive(mLeft(), mRight());
}

// Called once the command ends or is interrupted.
void TankDrive::End(bool interrupted) {}

// Returns true when the command should end.
bool TankDrive::IsFinished() 
{
  return false;
}
