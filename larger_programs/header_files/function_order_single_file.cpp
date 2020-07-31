#include <iostream>
using std::cout;

//Function 1
void function1() {
    cout << __func__ << "\n";
}

//Function 2
void function2() {
    //Able to call Function 1 as it is defined earlier
    function1();
}

int main() {
    function2();
}