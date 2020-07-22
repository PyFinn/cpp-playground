#include <iostream>
using std::cout;

int main() {
    if (true)
    {
        /* code */
    }
    
    bool i = true;
    while (i)
    {
        /* code */
        i = false;
    }
    
    //Only print even numbers
    int start = 1;
    while (start <= 10)
    {
        if (start % 2 == 0)
        {
            cout << start << "\n";
        }
        start++;
    }
    
}