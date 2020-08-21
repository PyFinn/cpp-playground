#include <iostream>
#include <string>
using std::cout;
using std::string;

class Animal
{
public:
    string color;
    string name;
    int age;
};

class Snake : public Animal
{
public:
    int length;
    void MakeSound() { cout << "SSSSSS"
                            << "\n"; };
};

class Cat : public Animal
{
public:
    double height;
    void MakeSound() { cout << "Miau"
                            << "\n"; };
};

int main()
{
    Snake snake;
    Cat cat;

    snake.age = 1;
    snake.color = "orange";
    snake.length = 2;

    cat.age = 5;
    cat.color = "black";
    cat.height = 0.32;

    snake.MakeSound();
    cat.MakeSound();
}