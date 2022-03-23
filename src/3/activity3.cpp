#include <iostream>
#include <algorithm>
#include <vector>
#include "../../include/3/activity3.h"
using namespace std;

int activity3Solution()
{
    int O, P, A, B, max_Value;
    vector<OrderedPair> vectOP;
    vector<int> vectX;
    vector<int> vectY;

    max_Value = 0;
    cout << "Set Values:" << endl;
    cout << "O : ";
    cin >> O;
    cout << "P : ";
    cin >> P;
    cout << "A : ";
    cin >> A;
    cout << "B : ";
    cin >> B;
    cout << "Maximun value for x and y: ";
    cin >> max_Value;

    for (int i = 0; i <= max_Value; ++i)
    {
        vectX.push_back(i);
        vectY.push_back(i);
    }

    for (auto x : vectX)
    {
        for (auto y : vectY)
        {
            if (isOrederedPair(x, y, P, O, A, B))
            {
                OrderedPair pair;
                pair.x = x;
                pair.y = y;
                vectOP.push_back(pair);
            }
        }
    }

    cout << "Valid Pairs:" << endl;

    for (OrderedPair i : vectOP)
        std::cout << i.x << ' ' << i.y << endl;

    return 0;
}

bool isOrederedPair(int x, int y, int P, int O, int A, int B)
{
    if (((x + y) % A) == 0 && ((x + y) % B) == 0 && (1 <= x) && (x <= O) && (1 <= y) && (y <= P))
    {
        return true;
    }
    return false;
}