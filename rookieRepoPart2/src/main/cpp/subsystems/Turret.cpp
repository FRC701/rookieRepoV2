// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Turret.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <ctre/Phoenix.h>

Turret::Turret(WPI_TalonFX&ID1, WPI_Pigeon2&ID2)
    : skycastle(ID1)
    , TGyro(ID2)
    {
    }

// This method will be called once per scheduler run
void Turret::Periodic() {
frc::SmartDashboard::PutNumber("TurretAngle", TGyro.GetYaw());
frc::SmartDashboard::PutNumber("TurretPitch", TGyro.GetPitch());
frc::SmartDashboard::PutNumber("TurretRoll", TGyro.GetRoll());
frc::SmartDashboard::PutNumber("TurretNumber", 3);
frc::SmartDashboard::PutBoolean("IsLimitSwitchHit",IsFwdLimitSwitchHit());
}

double Turret::Spinspeed(double position) {
    skycastle.Set(ControlMode::Position, position);
    return position;

   
}
 bool Turret::IsFwdLimitSwitchHit(){
        return skycastle.IsFwdLimitSwitchClosed();
    }