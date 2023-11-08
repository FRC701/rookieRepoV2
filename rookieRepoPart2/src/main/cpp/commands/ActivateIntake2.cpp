// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ActivateIntake2.h"

ActivateIntake2::ActivateIntake2(Intake2& intake2)
:mIntake2(intake2)
 {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void ActivateIntake2::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ActivateIntake2::Execute() {
  mIntake2.setSpeed(1);
}

// Called once the command ends or is interrupted.
void ActivateIntake2::End(bool interrupted) {
  mIntake2.setSpeed(0);
}

// Returns true when the command should end.
bool ActivateIntake2::IsFinished() {
  return false;
}
