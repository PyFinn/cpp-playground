#include <iostream>
using std::cout;

class Date {
    public:
        Date(int d, int m, int y);
        int Day() {return day;}
        int Month() {return month;}
        int Year() {return year;}

        void setDay(int day) {this->day = day;}
        void setMonth(int month) {this->month = month;}
        void setYear(int year) {this->year = year;}

    private:
        int day{1};
        int month{1};
        int year{0};
};

//Call the Date constructor which is a member of the Date class
Date::Date(int d, int m, int y) {
    setDay(d);
    setMonth(m);
    setYear(y);
};

int main() {
    Date date(2,2,2);
    cout << date.Day() << "." << date.Month() << "." << date.Year() << "\n";
}