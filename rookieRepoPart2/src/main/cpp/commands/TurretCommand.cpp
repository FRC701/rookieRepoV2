// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/TurretCommand.h"

TurretCommand::TurretCommand(Turret& skycastle)
: mSkycastle(skycastle)
 {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void TurretCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void TurretCommand::Execute() 
{
  mSkycastle.Spinspeed(1);
}

// Called once the command ends or is interrupted.
void TurretCommand::End(bool interrupted)
{
  mSkycastle.Spinspeed(0);
}

// Returns true when the command should end.
bool TurretCommand::IsFinished() {
  return false;
}
