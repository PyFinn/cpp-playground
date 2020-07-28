#include <iostream>
#include <string>
using std::cout;
using std::string;

int multiByTwoByValue(int i) {
    i = 2*i;
    return i;
}

int MultiplyByTwo_passreference(int &i) {
    i = 2*i;
    return i;
}

int MultiplyByTwo_passpointer(int *i) {
    *i = 2*(*i);
    return *i;
}

void DoubleString(string &str) {
    cout << str << " " << str << "\n";
}

int main() {
    //Passing Value
    cout << multiByTwoByValue(10) << "\n";
    //Passing reference
    int a = 10;
    cout << MultiplyByTwo_passreference(a) << "\n";
    //Passing pointer
    int b = 10;
    cout << MultiplyByTwo_passpointer(&b) << "\n";

    
    string m = "Double me";
    DoubleString(m);
}