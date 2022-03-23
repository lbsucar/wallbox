#include <iostream>
#include <iomanip>
#include "../include/1/activity1.h"
#include "../include/3/activity3.h"
#include "../include/4/activity4.h"
#include "../include/5/activity5.h"
#include "../include/6/activity6.h"
#include "../include/10/activity10.h"
#include "../include/11/activity11.h"
using namespace std;

int main()
{
    int option = -1;

    do
    {
        option = -1;
        cout << "Hello Cruel World!\n"
             << endl;
        cout << "=======================" << endl;
        cout << "Technical Test WallBox" << endl;
        cout << "=======================" << endl;
        cout << endl;
        cout << "Choose an option: (select a number option and press enter)" << endl;
        cout << " (1) Activity 1 : " << endl;
        cout << " (2) Activity 2 : " << endl;
        cout << " (3) Activity 3 : " << endl;
        cout << " (4) Activity 4 : " << endl;
        cout << " (5) Activity 5 : " << endl;
        cout << " (6) Activity 6 : " << endl;
        cout << " (7) Activity 7 : " << endl;
        cout << " (8) Activity 8 : " << endl;
        cout << " (9) Activity 9 : " << endl;
        cout << "(10) Activity 10: " << endl;
        cout << "(11) Activity 11: " << endl;
        cout << "(12) Activity 12: " << endl;
        cout << "(13) Activity 13: " << endl;

        cin >> option;

        switch (option)
        {
        case 1:
            cout << activity1Solution();
            break;
        case 2:
            cout << "Option "
                 << "2" << endl;
            break;
        case 3:
            cout << activity3Solution();
            break;
        case 4:
            cout << activity4Solution(1000);
            break;
        case 5:
            activity5Solution();
            break;
        case 6:
            activity6Solution();
            break;
        case 7:
            cout << "Option "
                 << "7" << endl;
            break;
        case 8:
            cout << "Option "
                 << "8" << endl;
            break;
        case 9:
            cout << "Option "
                 << "9" << endl;
            break;
        case 10:
            cout << activity10Solution();
            break;
        case 11:
            cout << activity11Solution();
            break;
        case 12:
            cout << "Option "
                 << "12" << endl;
            break;
        case 13:
            cout << "Option "
                 << "13" << endl;
            break;
        default:
            break;
        }
    } while (option <= 0 || option >= 14);
    return 0;
}