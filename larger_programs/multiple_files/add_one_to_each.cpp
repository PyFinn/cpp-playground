#include <vector>
using std::vector;

void addOneToEach(vector<int> &v){
    for (int& i : v) {
        i++;
    }
}