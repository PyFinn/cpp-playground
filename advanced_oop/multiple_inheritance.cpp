#include <cassert>
#include <iostream>
#include <string>

class Car {
public:
    std::string Drive() {return "I'm driving!";}
};

class Boat {
public:
    std::string Cruise() {return "I'm cruising!";}
};

class AmphibiousCar : public Car, public Boat {};

int main() {
    Car car;
    Boat boat;
    AmphibiousCar duck;
    assert(duck.Drive() == car.Drive());
    assert(duck.Cruise() == boat.Cruise());
}