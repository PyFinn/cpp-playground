#include <iostream>
#include <vector>
#include "practice_header.h"

using std::vector;
using std::cout;

int IncrementAndComputeVectorSum(vector<int> v) {
    int total = 0;
    AddOneToEach(v);

    for (int i : v)
    {
        total += i;
    }
    return total;
}

void AddOneToEach(vector<int> &v) {
    for (int& i : v)
    {
        i++;
    }
    
}

int main() {
    vector<int> v{1,2,3,4};
    int total = IncrementAndComputeVectorSum(v);
    cout << total << "\n";
}