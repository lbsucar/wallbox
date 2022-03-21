#ifndef ELECTRICVEHICLE_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define ELECTRICVEHICLE_H
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

class ElectricVehicle
{
    public:
        ElectricVehicle(string p_brand, string p_model, int p_energy):
            brand(p_brand), model(p_model), energy_capacity(p_energy){}
        
        int getMaxEnergy(){return energy_capacity;}
        string getModel(){return model;}
        string getBrand(){return brand;}
         
    private:
        string brand;
        string model;
        int energy_capacity;
};

#endif