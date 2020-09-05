#include <string>
#include <cassert>

class Animal {
public:
    virtual std::string Talk() const = 0;
};

class Cat : public Animal {
public:
    std::string Talk() const;
};

std::string Cat::Talk() const {
    return "Meow";
}

class Lion : public Cat {
public:
    std::string Talk() const;
};

std::string Lion::Talk() const {
    return "Roar";
}

int main() {
    Cat cat;
    assert(cat.Talk() == "Meow");

    Lion lion;
    assert(lion.Talk() == "Roar");
}