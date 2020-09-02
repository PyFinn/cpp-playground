#include <iostream>
#include <ctime>
using std::cout;

// Overloading with OOP
class Date {
    public:
        Date(int day, int month, int year) : day_(day), month_(month), year_(year) {}
        Date(int day, int month) : day_(day), month_(month) // automatically sets the Date to the current year (uses overloading)
        {
            time_t t = time(NULL);
            tm* timePtr = localtime(&t);
            year_ = timePtr->tm_year;
        }
    private:
        int day_;
        int month_;
        int year_;
};

//Overloading on normal func which is not a class member
void hello() {
    cout << "Hello, World!" << std::endl;
}

class Human {
    public:
        void hello(Human human) {cout<<"Hello, Human!"<<std::endl;};
};

class Ape {
    public:
        void hello(Ape ape) {cout<<"Hello, Ape!"<<std::endl;};
};

class Cat {
    public:
        void hello(Cat cat) {cout<<"Hello, Cat!"<<std::endl;};
};

int main() {
    Human human;
    Ape ape;
    Cat cat;
    hello();
    human.hello(human);
    ape.hello(ape);
    cat.hello(cat);
}