#include <iostream>
#include <string>
using std::cout;
using std::string;

class Car {
    public:
    void PrintCarData() {
        cout << color << number << "\n";
    }
    void incrementDistance() {
        distance++;
    }
    string color;
    int number;
    int distance = 0;
};

int main() {
    Car car;

    car.color = "blue";
    car.number = 1;
    car.PrintCarData();
    car.incrementDistance();
    int dist = car.distance;
    cout << dist << "\n";
}