#include <iostream>
#include "car.h"
using std::cout;

void Car::PrintCarData() {
    cout << "The distance that the " << color << " car " << number << " has traveled is: " << distance << "\n";
}

void Car::incrementDistance() {
    this->distance++;
}