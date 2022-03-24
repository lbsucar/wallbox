/* Copyright (C) Luis Beltran Sucar Segarra - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Luis Sucar <luis.sucar@gmail.com>, March 2022
 */
#ifndef ACTIVITY3_H
#define ACTIVITY3_H
#include "iostream"
#include "iomanip"
using namespace std;

struct OrderedPair
{
    int x;
    int y;
};

void activity3Solution();
bool isOrederedPair(int x, int y, int P, int O, int A, int B);

#endif