#include <vector>
#include "add_one_to_each.h"
using std::vector;

int IncrementAndComputeVectorSum(vector<int> v) {
    int total = 0;
    addOneToEach(v);

    for (int i : v)
    {
        total += i;
    }
    return total;
}
