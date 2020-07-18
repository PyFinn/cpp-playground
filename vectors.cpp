#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {

    //1D
    vector<int> vector1{0,1,20};
    vector<int> vector2 = {2,3,21};
    vector<int> vector3;
    vector3 = {4,5,22};

    cout << vector1[1] << "\n";
    cout << vector2[1] << "\n";
    cout << vector3[1] << "\n";
    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << "\n";
    }
    
    //2D
    vector<vector<int>> v2d = {{1,2}, {1,2,3}};
    for (int i = 0; i < v2d.size(); i++)
    {
        for (int u = 0; u < v2d[i].size(); u++)
        {
            cout << v2d[i][u] << "\n";
        }
    }
}