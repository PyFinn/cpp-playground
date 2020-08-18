#include <iostream>
#include <cassert>
using std::cout;

struct Date
{
    int day;
    int month;
    int year;
};


int main() {
    Date date;

    date.day = 17;
    date.month = 12;
    date.year = 2020;

    assert(date.day > 0 && date.day <= 31);
    assert(date.month > 0 && date.month <= 12);
    assert(date.year == 2020);

    cout << date.day << "." << date.month << "." << date.year << "\n";
}