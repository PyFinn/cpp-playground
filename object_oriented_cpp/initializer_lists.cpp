#include <iostream>
using std::cout;

class Date {
    public:
        Date(int d, int m, int y);
        int Day() {return day;}
        int Month() {return month;}
        int Year() {return year;}
    private:
        int day{1};
        int month{1};
        int year{0};
};

//Initialize directly
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

int main() {
    Date date(2,2,2);
    cout << date.Day() << "." << date.Month() << "." << date.Year() << "\n";
}