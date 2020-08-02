#include <iostream>
using std::cout;

int main() {
    int i = 1;

    //Reference to i
    int& j = i;

    //Prints the adress of j
    cout << &j << "\n";
    cout << j << "\n";

    i = 5;
    cout << j << "\n";
    
    j = 7;
    cout << j << "\n";
    cout << i << "\n";
}