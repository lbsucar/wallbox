#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include "../../include/10/activity10.h"
using namespace std;


int activity10Solution() 
{
    vector<ElectricVehicle> eVehicles;
    cout << "Hello Cruel World!\n";
    ElectricVehicle vehicle1 = ElectricVehicle("Tesla" , "Model 3", 75);
    ElectricVehicle vehicle2 = ElectricVehicle("Kia" , "Soul", 64);
    ElectricVehicle vehicle3 = ElectricVehicle("BMW" , "i3", 42.2);
    ElectricVehicle vehicle4 = ElectricVehicle("Renault" , "Zoe", 52);
    ElectricVehicle vehicle5 = ElectricVehicle("Peougeot" , "e-208", 50);

    eVehicles.push_back(vehicle1);
    eVehicles.push_back(vehicle2);
    eVehicles.push_back(vehicle3);
    eVehicles.push_back(vehicle4);
    eVehicles.push_back(vehicle5);
 for (ElectricVehicle i : eVehicles)
    {
        cout <<"Brand: "<<  i.getBrand() <<" , Model: "<<i.getModel() << ", Batttery Capacity: " << i.getMaxEnergy() << endl;
    }
    cout<<"SORT by capacity"<<endl;
std::sort(eVehicles.begin(), eVehicles.end(), [](ElectricVehicle a, ElectricVehicle b) {
        return a.getMaxEnergy() > b.getMaxEnergy();
    });
for (ElectricVehicle i : eVehicles)
    {
        cout <<"Brand: "<<  i.getBrand() <<" , Model: "<<i.getModel() << ", Batttery Capacity: " << i.getMaxEnergy() << endl;
    }
    
    
    return 0;
}