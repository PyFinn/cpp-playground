#include <iostream>
#include <vector>
using std::cout;
using std::vector;

bool columnOk(vector<vector<int>> grid, int numToTry, int index) {
    for (int i = 0; i < grid[index].size(); i++)
    {
        if (numToTry == grid[index][i])
        {
            return false;
        }
    }
    return true;
}

bool rowOk(vector<vector<int>> grid, int numToTry, int index) {
    for (int i = 0; i < grid.size(); i++)
    {
        if (numToTry == grid[i][index] )
        {
            return false;
        }
    }
    return true;
}

bool blockOk() {
    
}

int main() {

}