//A Non-Guided CPP Fun Project :)
#include <iostream>
#include <string>
using std::string;
using std::cout;

void hanoi(int n, string start, string store, string destination) {
    if (n > 0)
    {
        hanoi(n - 1, start, destination, store);
        cout << "Put plate " << n << " from " << start << " to " << destination << "\n";
        hanoi(n - 1, store, start, destination);
    }
    
}

int main() {
    hanoi(5, "left", "mid", "right");
}