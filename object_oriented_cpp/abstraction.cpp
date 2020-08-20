#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::to_string;

class Date {
public:
    Date(int d, int m, int y);
    void setDate(int d, int m, int y);
    string getDate();
private:
    int day{1};
    int month{1};
    int year{0};
};

Date::Date(int d, int m, int y) {
    setDate(d,m,y);
}

void Date::setDate(int day, int month, int year) {
     int day_numbers[]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(year % 4 == 0 && year % 100 != 0 || year% 400 == 0)
        day_numbers[1]++;

    if(year < 1 || day < 1 || month < 1 || month > 12 || day > day_numbers[month - 1])
        throw std::domain_error("Invalid date!");

    Date::day = day; 
    Date::month = month; 
    Date::year =year;
}

string Date::getDate() {
    return to_string(day) + "." + to_string(month) + "." + to_string(year);
}

int main() {
    Date date(5,10,2019);
    cout << date.getDate() << "\n";
}