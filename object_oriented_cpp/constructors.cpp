#include <iostream>
using std::cout;

class Date {
    public:
    //This is a constructor
        Date(int day, int month, int year) {
            this->day = day;
            this->month = month;
            this->year = year;
        }
        int Day() {return day;}
        int Month() {return month;}
        int Year() {return year;}

    private:
        int day{1};
        int month{1};
        int year{0};
};

int main() {
    Date date(1,2,3);
    cout << date.Day() << "\n";
}