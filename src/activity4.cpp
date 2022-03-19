#include <iostream>
#include <algorithm>

using namespace std;
#include "activity4.h"

int activity4Solution()
{
    
    int max_Value = 1000;
    int resultValue = 0;
    
    for (int i=0; i <= max_Value; ++i)
    {
        if((i%3==0) && (i%5==0))
            resultValue = resultValue + i;
    }

    cout << "Result : " << resultValue << endl;

    return 0;
}