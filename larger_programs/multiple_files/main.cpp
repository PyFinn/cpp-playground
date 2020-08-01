//Functionality of header_practice.cpp in multiple files
#include <iostream>
#include <vector>
#include "increment_and_compute_vector_sum.h"
using std::cout;
using std::vector;

int main() {
    vector<int> v{1,2,3,4};
    int total = IncrementAndComputeVectorSum(v);
    cout << total << "\n";
}