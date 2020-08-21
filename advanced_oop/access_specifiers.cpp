#include <iostream>
#include <string>
using std::cout;
using std::string;

class Vehicle {
public:
    string color = "blue";
    int wheels = 0;

    void Print() const {
        cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : public Vehicle {
    bool sunroof = false;
};

class Bicycle : protected Vehicle {
    public:
    bool kickstand = true;
    void Print(){Vehicle::Print();};
};

class Scooter : private Vehicle {
    public:
    bool electric = false;
    void Print() {Vehicle::Print();};
    void setWheels(int w) {wheels = w;};
};

int main() {
    Car car;
    Bicycle bicycle;
    Scooter scooter;
    
    //Not working
    // bicycle.Print();
    // scooter.color = "red";
    bicycle.Print();
    scooter.setWheels(2);
    scooter.Print();

}