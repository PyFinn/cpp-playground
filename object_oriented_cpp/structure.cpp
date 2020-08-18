#include <iostream>
#include <cassert>
using std::cout;

struct Date
{
    public:
        int Day() { return day; }
        void setDay(int day) { this->day = day; }
        int Month() { return month; }
        void setMonth(int month) { this->month = month; }
        int Year() { return year; }
        void setYear(int year) { this->year = year; }
    private:
        //Initialized variables with a default initialization
        int day{7};
        int month{6};
        int year{2002};
};


int main() {
    Date date;

    date.setDay(17);
    date.setMonth(12);
    date.setYear(2020);

    assert(date.Day() > 0 && date.Day() <= 31);
    assert(date.Month() > 0 && date.Month() <= 12);
    assert(date.Year() <= 2020);

    cout << date.Day() << "." << date.Month() << "." << date.Year() << "\n";
}