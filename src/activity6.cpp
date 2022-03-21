#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>  
#include "activity6.h"
using namespace std;


int activity6Solution() 
{
/*
=> ERROR [5/5] RUN make all                                                                                 1.8s
------                                                                                                            
 > [5/5] RUN make all:                                                                                            
#9 0.545 g++ src/activity1.cpp src/main.cpp  -o main                                                              
#9 0.995 src/activity1.cpp: In function 'int activity1Solution()':                                                
#9 0.995 src/activity1.cpp:9:18: error: 'Vehicle' is an ambiguous base of 'Plane'                                 
#9 0.995      Vehicle& v = plane;
#9 0.995                   ^~~~~
#9 1.811 make: *** [release2] Error 1
#9 1.812 Makefile:28: recipe for target 'release2' failed
------
Explanation:
The compiler can not solve the dependencies so we have to set that the heritance cames from a virtual struct 
*/int iSecret, iGuess;
int last =-1;
int launches=0;
int launches4;
bool bingo=false;
srand (time(NULL));
while(!bingo){
    launches++;
    iSecret = rand() % 2; 
    if(last < 0){
        last = iSecret;
        launches4++;
    }
    else if( last != iSecret)
    {
        launches4++;
    }
    else
        launches4=1;
    if(launches4==4)
        bingo=true;
}
cout<<"Se ha necesitado " << launches<< endl;



    return 0;
}