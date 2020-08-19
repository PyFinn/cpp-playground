#include <iostream>
using std::cout;

class Date {
public:
    Date(int d, int m, int y);

    const int Day() {return day;}
    const int Month() {return month;}
    const int Year() {return year;}

    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
private:
    int day{1};
    int month{1};
    int year{0};
};

Date::Date(int d, int m, int y) {
    setDay(d);
    setMonth(m);
    setYear(y);
};

void Date::setDay(int d) {
    if (d >= 1 && d <= 31)
    {
        this->day = day;
    }
};

void Date::setMonth(int m) {
    if (m >= 1 && m <= 12)
    {
        this->month = month;
    }
};

void Date::setYear(int y) {
    if (y >= 0 && y <= 2020)
    {
        this->year = year;
    }
};

int
main() {
    Date date(-2,2,2);
    cout << date.Day() << "\n";
}