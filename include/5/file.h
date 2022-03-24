/* Copyright (C) Luis Beltran Sucar Segarra - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Luis Sucar <luis.sucar@gmail.com>, March 2022
 */
#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "../include/boost/date_time/gregorian/greg_date.hpp"

using namespace std;

class File
{
private:
    boost::gregorian::date dateFile;
    string owner;
    char ownerRights;
    char groupRights;
    char othersRights;
    long long int size;
    string name;

public:
    File(boost::gregorian::date date, string owner, char ownerRights, char groupRights, char othersRights, long long int size, string name);
    File();
    boost::gregorian::date getDate()
    {
        return dateFile;
    }

    void setDate(boost::gregorian::date dateFile)
    {
        this->dateFile = dateFile;
    }

    string getOwner()
    {
        return owner;
    }

    void setOwner(string owner)
    {
        this->owner = owner;
    }

    char getOwnerRights()
    {
        return ownerRights;
    }

    void setOwnerRights(char ownerRights)
    {
        this->ownerRights = ownerRights;
    }

    char getGroupRights()
    {
        return groupRights;
    }

    void setGroupRights(char groupRights)
    {
        this->groupRights = groupRights;
    }

    char getOthersRights()
    {
        return othersRights;
    }

    void setOthersRights(char othersRights)
    {
        this->othersRights = othersRights;
    }

    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    long long int getSize()
    {
        return size;
    }

    void setSize(long long int size)
    {
        this->size = size;
    }
};

#endif