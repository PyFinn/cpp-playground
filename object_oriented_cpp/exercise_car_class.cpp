// TODO:
// Create a class called Car.
// Create 3 member variables: horsepower, weight and brand. The brand attribute must be a character array.
// Create accessor and mutator functions for all member data. The mutator function for brand must accept a C++ string as a parameter and convert that string into a C-style string (a character array ending in null character) to set the value of brand.
// The accessor function for the brand must return a string, so in this function you first will need to convert brand to std::string, and then return it.

#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cout;

class Car
{
private:
    int horsepower;
    int weight;
    string brand;
public:
    Car(int hp, int wt, vector<char> bd);

    int HorsePower();
    int Weight();
    string Brand();

    void setHorsePower(int hp);
    void setWeight(int wt);
    void setBrand(vector<char> bd);
};

Car::Car(int hp, int wt, vector<char> bd)
{
    setHorsePower(hp);
    setWeight(wt);
    setBrand(bd);
}

void Car::setHorsePower(int hp) {
    this->horsepower = hp;
}

void Car::setWeight(int wt) {
    this->weight = wt;
}

void Car::setBrand(vector<char> bd) {
    this->brand = "s";
    for (char c : bd) {
        this->brand.push_back(c);
    }
}

int Car::HorsePower() {
    return horsepower;
}

int Car::Weight() {
    return weight;
}

string Car::Brand() {
    return brand;
}

int main() {
    vector<char> charvec = {"V","W"};
    Car car(200, 200, charvec);
    cout << "My car has " << car.HorsePower() << " PS. It weights " << car.Weight() << " Kilogramm. And is manufactured by " << car.Brand() << "\n";
}