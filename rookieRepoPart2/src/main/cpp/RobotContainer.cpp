// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

#include <frc2/command/button/Trigger.h>

#include "commands/Autos.h"
#include "commands/ExampleCommand.h"

#include <frc/smartdashboard/SmartDashboard.h>
#include "commands/ShooterRun.h"
#include "commands/ActivateIntake.h"

#include "commands/TurretCommand.h"

#include <frc/smartdashboard/SmartDashboard.h>

#include "commands/ActivateIntake.h"

#include "commands/TankDrive.h"

#include "commands/ArmRun.h"

  // Initialize all of your commands and subsystems here


RobotContainer::RobotContainer() {
  // Initialize all of your commands and subsystems 
  frc::SmartDashboard::PutData("Turret", new Turret(skycastle));
  
  frc::SmartDashboard::PutData("IntakeButton",new ActivateIntake(mIntake, 5));
  frc::SmartDashboard::PutData("IntakeButton",new ActivateIntake(mIntake, 8));
  
  frc::SmartDashboard::PutData("Shoot", new ShooterRun(mShooter, 3000));
  frc::SmartDashboard::PutData("Shoot",new ShooterRun(mShooter, 2700) );

  frc::SmartDashboard::PutData("MoveArm", new ArmRun(mArm, 242));
  frc::SmartDashboard::PutData("MovementArm", new ArmRun(mArm, 678));

  mDriveTrain.SetDefaultCommand
   (
    TankDrive(
      mDriveTrain,
      [this] { return -driver.GetLeftY(); },
      [this] { return -driver.GetRightY();}
    )
   );
   
  // Configure the button bindings
  ConfigureBindings();
}



void RobotContainer::ConfigureBindings() {
  // Configure your trigger bindings here

  // Schedule `ExampleCommand` when `exampleCondition` changes to `true`
  frc2::Trigger([this] {
    return m_subsystem.ExampleCondition();
  }).OnTrue(ExampleCommand(&m_subsystem).ToPtr());

  // Schedule `ExampleMethodCommand` when the Xbox controller's B button is
  // pressed, cancelling on release.
  m_driverController.B().WhileTrue(m_subsystem.ExampleMethodCommand());
}

frc2::CommandPtr RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return autos::ExampleAuto(&m_subsystem);
}
