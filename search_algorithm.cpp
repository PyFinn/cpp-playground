#include <iostream>
#include <vector>
using std::vector;
using std::cout;

void PrintBoard(vector<vector<int>> v1) {
    for(vector<int> v : v1) {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << "\n";
    }
}

int main() {
    vector<vector<int>> board;
    board = {{0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 0, 0, 0, 1, 0}};
    PrintBoard(board);
}