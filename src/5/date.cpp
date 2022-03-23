#include <iostream>
#include "../../include/5/date.h"
using namespace std;
// Date member function
void Date::setDate(short unsigned int year, short unsigned int month, short unsigned int day)
{
    m_month = month;
    m_day = day;
    m_year = year;
}

// Date constructor
Date::Date(short unsigned int year, short unsigned int month, short unsigned int day)
{
    setDate(year, month, day);
}
