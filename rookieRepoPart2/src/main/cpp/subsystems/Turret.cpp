// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Turret.h"
#include <ctre/Phoenix.h>

Turret::Turret(WPI_TalonFX&ID1)
    : skycastle(ID1)
    {
    }

// This method will be called once per scheduler run
void Turret::Periodic() {}

double Turret::Spinspeed(double Spin) {
    skycastle.Set(Spin);
    return Spin;
}