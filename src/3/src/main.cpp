#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct OrderedPair {
    int x;
    int y;
};

bool isOrederedPair (int x, int y, int P, int O, int A, int B);

auto main() -> int 
{
    int O,P,A,B;
    vector <OrderedPair> vectOP;
    vector <int> vectX;
    vector <int> vectY;

    for (int i=0; i < 10; ++i)
    {   
        vectX.push_back(i);
        vectY.push_back(i);
    }
    
    cout << "Introduzca valores:" << endl;
    cout << "O : ";
    cin >> O;
    cout << "P : ";
    cin >> P;
    cout << "A : ";
    cin >> A;
    cout << "B : ";
    cin >> B;
    
    for (auto x : vectX)
    {
        for (auto y : vectY)
        {
            if(isOrederedPair(x, y, P, O, A, B))
            {
                OrderedPair pair;
                pair.x = x;
                pair.y = y;
                vectOP.push_back(pair);
            }
        }
    }
    return 0;
}

bool isOrederedPair (int x, int y, int P, int O, int A, int B){
    if((x+y)/A && (x+y)/B && (1<=x<=O) && (1<=y<=P))
    {return true;}
    return false;
} 

/*
nums = range(2, 100)
for i in range(2, 10):
    nums = filter(lambda x: x == i or x % i, nums)
print nums
*/