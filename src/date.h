#ifndef DATE_H    // To make sure you don't declare the function more than once by including the header multiple times.
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
    Date(){ setDate(0, 0, 0);}
    short unsigned int getYear() { return m_year; }
    short unsigned int getMonth() { return m_month; }
    short unsigned int getDay()  { return m_day; }
};

#endif