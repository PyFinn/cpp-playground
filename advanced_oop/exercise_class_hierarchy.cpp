//Multi Level Inheritance
#include <iostream>
using std::cout;

class Vehicle {
    public:
        int wheels=0;
};

// Derive PassengerVehicle from Vehicle
class PassengerVehicle : public Vehicle {
public:
    int seats=0;
};

// Derive Sedan from PassengerVehicle
class Sedan : public PassengerVehicle {
public:
    int trunk_capacity=0;
};

int main() {
    Sedan sedan;
    sedan.wheels = 4;
    sedan.seats = 4;
    sedan.trunk_capacity = 3;

    cout << sedan.wheels << ", " << sedan.seats << ", " << sedan.trunk_capacity << std::endl;
}