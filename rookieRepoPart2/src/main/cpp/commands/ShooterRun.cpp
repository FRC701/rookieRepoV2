// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ShooterRun.h"

ShooterRun::ShooterRun(Shooter& shooter, double Velocity)
: mShooter(shooter)
 {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void ShooterRun::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ShooterRun::Execute() {
  mShooter.SETspeed(Velocity);
}

// Called once the command ends or is interrupted.
void ShooterRun::End(bool interrupted) {
  mShooter.SETspeed(0);
}

// Returns true when the command should end.
bool ShooterRun::IsFinished() {
  return false;
}
