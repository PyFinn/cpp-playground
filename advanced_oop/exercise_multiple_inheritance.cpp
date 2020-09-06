#include <cassert>

class Animal {
public:
    bool isAlive = true;
};

class Pet {
public:
    bool hasOwner = true;
};

class Dog : public Animal, public Pet {

};

class Cat : public Animal, public Pet {

};

int main() {
    Animal animal;
    Pet pet;
    Dog dog;
    Cat cat;

    assert(cat.isAlive == animal.isAlive);
    assert(cat.hasOwner == pet.hasOwner);
}