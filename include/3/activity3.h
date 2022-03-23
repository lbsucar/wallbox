#ifndef ACTIVITY3_H // To make sure you don't declare the function more than once by including the header multiple times.
#define ACTIVITY3_H
#include "iostream"
#include "iomanip"
using namespace std;

struct OrderedPair
{
    int x;
    int y;
};

int activity3Solution();
bool isOrederedPair(int x, int y, int P, int O, int A, int B);

#endif