#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    //Simple For Loop
    for (int i = 0; i < 10; i++)
    {
        /* code */
    }
    //Post increment
    int i = 0;
    int c = i++;
    cout << i << "\n"; // i = 1
    cout << c << "\n"; // c = 0
    // Pre increment
    int u = 0;
    int z = ++u;
    cout << u << "\n"; // u = 1
    cout << z << "\n"; // z = 1
    //Range-Based Loop
    vector<int> v1{1,2,3,4,5};
    for (int i : v1) {
        cout << i << "\n";
    }
}