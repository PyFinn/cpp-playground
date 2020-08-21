#include <iostream>
#include <string>
using std::string;
using std::cout;

class Vehicle {
private:
    string model_name;
public:
    int wheels = 0;
    string color = "blue";

    void set_name(string s) {
        model_name = s;
    }

    string GetName() {return model_name;}

    void Print() const {
        cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : public Vehicle {
public:
    bool kickstand = true;
};

class Truck : public Vehicle {
public:
    bool looks_good = false;
};

int main() {
    Car car;
    car.set_name("Fiat 500");
    cout << car.GetName() << "\n";

    Truck truck;
    truck.wheels = 6;
    truck.color = "orange";
    truck.Print();
}