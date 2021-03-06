/* Copyright (C) Luis Beltran Sucar Segarra - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Luis Sucar <luis.sucar@gmail.com>, March 2022
 */
#ifndef ACTIVITY1_H // To make sure you don't declare the function more than once by including the header multiple times.
#define ACTIVITY1_H
#include "iostream"
#include "iomanip"
using namespace std;

struct Vehicle
{
    virtual ~Vehicle() = default;
    virtual void Move() {}
};

struct WheelVehicle : virtual Vehicle
{
    virtual void TurnRight() {}
};

struct WingVehicle : virtual Vehicle
{
    virtual void TakeOff() {}
};

struct Plane : WheelVehicle, WingVehicle
{
    void Move() { cout << "Vamonooosss"; }
    void TakeOff() {}
    void TurnRight() {}
};

/**
 * @brief   Solves the ACtivity one
 *
 */
int activity1Solution();

#endif