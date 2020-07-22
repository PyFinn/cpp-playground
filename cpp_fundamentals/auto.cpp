#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    //Using auto instead of int
    auto i = 5;
    //Using auto instead of vector
    auto v1 = {1,2,3,4,5,6};
    for (auto i : v1)
    {
        cout << i << "\n";
    }
    
}