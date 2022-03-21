#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "electricVehicle.h"
using namespace std;

    ElectricVehicle::ElectricVehicle( boost::gregorian::date date, string owner, char ownerRights, char groupRights, char othersRights, long long int size, string name)
    {
        this->setDate(date);
        this->setGroupRights(groupRights);
        this->setOwner(owner);
        this->setOwnerRights(ownerRights);
        this->setGroupRights(groupRights);
        this->setOthersRights(othersRights);
        this->setSize(size);
        this->setName(name);
    }
    
    ElectricVehicle::ElectricVehicle()
    {boost::gregorian::date date(1401, 12, 19);
        this->setDate(date);
    }