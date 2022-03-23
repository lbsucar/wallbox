#include <iostream>
#include <vector>
#include "../../include/11/activity11.h"
using namespace std;


int activity11Solution() 
{
    vector<int> v1{50,200,800,35,75,150,190,750,900};
    vector<int> v2;
    for (int i : v1)
    {
       if(i<100)
        v2.push_back(i*i);
       else if(i>600)
        v2.push_back(i/4);
    }


    return 0;
}