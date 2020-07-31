#include "example_header.h"
#include <iostream>
using std::cout;

//Function 1
void function1() {
    //Able to call Function 2 because of the Header
    function2();
}

//Function 2
void function2() {
    cout << __func__ << "\n";
}

int main() {
    function1();
}