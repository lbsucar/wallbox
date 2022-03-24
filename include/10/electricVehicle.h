/* Copyright (C) Luis Beltran Sucar Segarra - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Luis Sucar <luis.sucar@gmail.com>, March 2022
 */
#ifndef ELECTRICVEHICLE_H
#define ELECTRICVEHICLE_H
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class ElectricVehicle
{
public:
    ElectricVehicle(string p_brand, string p_model, int p_energy) : brand(p_brand), model(p_model), energy_capacity(p_energy) {}
    //ElectricVehicle(boost::gregorian::date date, std::string owner, char ownerRights, char groupRights, char othersRights, long long int size, std::string name)
    ElectricVehicle(){}
    int getMaxEnergy() { return energy_capacity; }
    string getModel() { return model; }
    string getBrand() { return brand; }

private:
    string brand;
    string model;
    int energy_capacity;
};

#endif