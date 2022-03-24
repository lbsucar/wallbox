/* Copyright (C) Luis Beltran Sucar Segarra - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Luis Sucar <luis.sucar@gmail.com>, March 2022
 */

#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <iomanip>
using namespace std;

class Date
{
private:
    short unsigned int m_year;
    short unsigned int m_month;
    short unsigned int m_day;

public:
    Date(short unsigned int year, short unsigned int month, short unsigned int day);

    void setDate(short unsigned int year, short unsigned int month, short unsigned int day);
    Date() { setDate(0, 0, 0); }
    short unsigned int getYear() { return m_year; }
    short unsigned int getMonth() { return m_month; }
    short unsigned int getDay() { return m_day; }
};

#endif