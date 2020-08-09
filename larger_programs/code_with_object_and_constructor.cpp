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
    //Adding a constructor
    Car(string c, int n) {
        color = c;
        number = n;
    }
    string color;
    int number;
    int distance = 0;
};

int main() {
    Car car = Car("green", 1);

    car.PrintCarData();
    car.incrementDistance();
    int dist = car.distance;
    cout << dist << "\n";
}