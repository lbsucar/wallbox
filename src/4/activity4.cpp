/* Copyright (C) Luis Beltran Sucar Segarra - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Luis Sucar <luis.sucar@gmail.com>, March 2022
 */
#include <iostream>
#include <algorithm>
#include "../../include/4/activity4.h"
using namespace std;

int activity4Solution(int max_Value)
{
    int resultValue = 0;

    for (int i = 0; i <= max_Value; ++i)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            resultValue = resultValue + i;
    }

    cout << "Result : " << resultValue << endl;

    return resultValue;
}