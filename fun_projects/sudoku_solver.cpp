#include <iostream>
#include <vector>
using std::cout;
using std::vector;

bool columnOk(vector<vector<int>> grid, int numToTry, int index) {
    for (int i = 0; i < grid[index].size(); i++)
    {
        if (numToTry == abs(grid[index][i]))
        {
            return false;
        }
    }
    return true;
}

bool rowOk(vector<vector<int>> grid, int numToTry, int index) {
    for (int i = 0; i < grid.size(); i++)
    {
        if (numToTry == abs(grid[i][index]))
        {
            return false;
        }
    }
    return true;
}

bool blockOk(vector<vector<int>> grid, int numToTry, int indexColumn, int indexRow) {
    int startX = (indexColumn/3) * 3;
    int startY = (indexRow / 3) * 3;
    for (int i = startX; i < startX + 3; i++)
    {
        for (int a = startY; a < startY + 3; a++)
        {
            if (abs(grid[i][a]) == numToTry)
            {
                return false;
            }
        }
    }
    return true;
}

int main() {

}