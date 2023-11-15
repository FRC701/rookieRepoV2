// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ArmRun.h"

ArmRun::ArmRun(Arm& arm, double Position)
:mArm(arm)
 {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void ArmRun::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ArmRun::Execute() 
{
mArm.Sped(Position);
}

// Called once the command ends or is interrupted.
void ArmRun::End(bool interrupted) 
{

}

// Returns true when the command should end.
bool ArmRun::IsFinished() {
  return false;
}
