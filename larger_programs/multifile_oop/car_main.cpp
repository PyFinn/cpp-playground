#include <iostream>
#include <string>
#include "car.h"
#include <vector>

using std::cout;
using std::string;
using std::vector;

void Access_Class() {
    Car car1 = Car("Green", 1);
    car1.incrementDistance();
    car1.PrintCarData();
}

void scall_up_to_see_the_good_OOP(){
    // Create an empty vector of pointers to Cars
    // and a null pointer to a car.
    vector<Car*> car_vect;
    Car* cp = nullptr;

    // The vector of colors for the cars:
    vector<string> colors {"red", "blue", "green"};

    // Create 100 cars with different colors and
    // push pointers to each of those cars into the vector.
    for (int i=0; i < 100; i++) {;
        cp = new Car(colors[i%3], i+1);
        car_vect.push_back(cp);
    }

    // Move each car forward by 1.
    for (Car* cp: car_vect) {
        cp->incrementDistance();
    }

    // Print data about each car.
    for (Car* cp: car_vect) {
        cp->PrintCarData();
    }
}

int main()
{
    Access_Class();
    scall_up_to_see_the_good_OOP();
}