// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ActivateIntake.h"

ActivateIntake::ActivateIntake(Intake& intake, double MotorSpeed) 
:mIntake(intake)
{
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void ActivateIntake::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ActivateIntake::Execute() {
  mIntake.setSpeed(MotorSpeed);
}

// Called once the command ends or is interrupted.
void ActivateIntake::End(bool interrupted) {
  mIntake.setSpeed(0);
}

// Returns true when the command should end.
bool ActivateIntake::IsFinished() {
  return false;
}
