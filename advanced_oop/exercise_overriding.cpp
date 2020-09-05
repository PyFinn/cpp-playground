#include <string>
using std::string;

class Animal {
public:
    virtual string Talk() const = 0;
};

class Dog : public Animal {
public:
    string Talk() const {return "Bark";}
};

int main() {
    Dog dog;
}