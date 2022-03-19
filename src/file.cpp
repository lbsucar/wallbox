#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "file.h"
using namespace std;

    File::File( boost::gregorian::date date, string owner, char ownerRights, char groupRights, char othersRights, long long int size, string name)
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
    
    File::File()
    {boost::gregorian::date date(1401, 12, 19);
        this->setDate(date);
    }