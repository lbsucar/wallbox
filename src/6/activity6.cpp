/* Copyright (C) Luis Beltran Sucar Segarra - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Luis Sucar <luis.sucar@gmail.com>, March 2022
 */
#include <iostream>
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>
#include "../../include/6/activity6.h"
using namespace std;

int activity6Solution()
{
    int iSecret, iGuess;
    int last = -1;
    int launches = 0;
    int launches4;
    bool bingo = false;
    srand(time(NULL));
    while (!bingo)
    {
        launches++;
        iSecret = rand() % 2;
        if (last < 0)
        {
            last = iSecret;
            launches4++;
        }
        else if (last != iSecret)
        {
            launches4++;
        }
        else
            launches4 = 1;
        if (launches4 == 4)
            bingo = true;
    }

    return launches;
}