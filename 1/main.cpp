#include <iostream>
using namespace std;

struct Vehicle {
    virtual ~Vehicle() = default;
    virtual void Move() {}
};

struct WheelVehicle: Vehicle{
    virtual void TurnRight() {}
};

struct WingVehicle: Vehicle{
    virtual void TakeOff() {}
};

struct Plane:WheelVehicle, WingVehicle {};

int main() 
{
    Plane plane;
    Vehicle& v = plane;
    cout << "Hello Cruel World!\n";
    return 0;
}