#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using std::cout;
using std::string;

class Car {
    public:
    void PrintCarData();
    void incrementDistance();
    //Adding a constructor
    Car(string c, int n) {
        color = c;
        number = n;
    }
    private:
    string color;
    int number;
    int distance = 0;
};

#endif