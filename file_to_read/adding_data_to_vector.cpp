#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<int> v1{1,2,3};
    for (int i : v1)
    {
        cout << i << "\n";
    }
    //Push to the back of the Vector
    v1.push_back(4);
    //Print again
    for (int i : v1)
    {
        cout << i << "\n";
        if (i == 4)
        {
            cout << "Successfully added an element" << "\n";
        }
        
    }
    //Pop from vector (Last element)
    v1.pop_back();
    int counter = 0;
    for (int i : v1)
    {
        cout << i << "\n";
        counter++;
        if ((i != 4 )&& counter == v1.size())
        {
            cout << "Successfully popped an element" << "\n";
        }
    }
}