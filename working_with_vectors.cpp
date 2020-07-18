#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<int> v1{0,1,2,3,4};
    //1D Vector Access at specific pos
    cout << v1[0] << "\n";
    //Vector Length
    cout << v1.size() << "\n";
    //2D Vector Access at specific pos
    vector<vector<int>> v2 = {{0,1,2}, {3,4,5}};
    cout << v2[0][0] << "\n";
    //2D Vector Length
    int sizeV2 = 0;
    for (int i = 0; i < v2.size(); i++)
    {
        for (int u = 0; u < v2[i].size(); u++)
        {
            sizeV2++;
        }
        
    }
    cout << sizeV2 << "\n";
    
}