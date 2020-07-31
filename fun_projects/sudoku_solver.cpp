#include <iostream>
#include <vector>
using std::cout;
using std::vector;

bool rowOk(vector<vector<int>> &grid, int numToTry, int index) {
    for (int i = 0; i < grid[index].size(); i++)
    {
        if (numToTry == abs(grid[index][i]))
        {
            return false;
        }
    }
    return true;
}

bool columnOk(vector<vector<int>> &grid, int numToTry, int index) {
    for (int i = 0; i < grid.size(); i++)
    {
        if (numToTry == abs(grid[i][index]))
        {
            return false;
        }
    }
    return true;
}

bool blockOk(vector<vector<int>> &grid, int numToTry, int indexColumn, int indexRow) {
    int startX = (indexRow / 3) * 3;
    int startY = (indexColumn/3) * 3;
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

void solveSudoku(vector<vector<int>> &grid) {
    int position = 0;
    while (position < 81)
    {        
        int actualRow = position / 9;
        int actualColumn = position % 9;

        if (grid[actualRow][actualColumn] < 0)
        {
            position++;
        }
        else
        {
            int numToTry = grid[actualRow][actualColumn] + 1;
            bool foundNumber = false;
            while (!foundNumber)
            {
                bool columnCheck = columnOk(grid, numToTry, actualColumn);
                bool rowCheck = rowOk(grid, numToTry, actualRow);
                bool blockCheck = blockOk(grid, numToTry, actualColumn, actualRow);
                if (columnCheck && rowCheck && blockCheck)
                {
                    foundNumber = true;
                } else
                {
                    numToTry++;
                }
                
                
            }
            if (numToTry < 10)
            {
                grid[actualRow][actualColumn] = numToTry;
                position++;
            } else
            {
                grid[actualRow][actualColumn] = 0;
                do
                {
                    position--;
                } while (grid[position / 9][position % 9] < 0);
            }
        }
    }
    
}

void printSudoku(vector<vector<int>> &grid) {
    for (vector<int> v : grid)
    {
        for (int i : v)
        {
            cout << abs(i) << ", ";
        }
        cout << "\n";
    }
    
}

int main() {
    vector<vector<int>> sudoku = {
        { -4, -1,  0,  0, -6, -5,  0,  0, -7},
        {  0,  0, -6,  0,  0, -7, -4, -8,  0},
        { -2,  0, -7, -4, -9,  0,  0,  0, -6},
        {  0, -6,  0,  0, -7,  0, -1,  0,  0},
        { -3,  0, -1, -5,  0,  0,  0, -7, -2},
        {  0, -9,  0,  0, -4, -2, -3,  0, -8},
        { -1,  0, -8, -6,  0,  0,  0, -2, -9},
        {  0, -2,  0,  0, -1, -8, -6, -4,  0},
        { -6,  0,  0, -3,  0,  0,  0, -1,  0}
    };
    vector<vector<int>> sudoku2 = {
        { -2, -3,  0,  0,  0, -9, -4,  0,  0},
        {  0, -8, -4,  0, -3,  0, -2,  0,  0},
        { -5,  0, -6,  0, -8,  0, -3,  0, -1},
        {  0,  0, -8, -3,  0,  0,  0, -9,  0},
        {  0,  0,  0,  0, -4, -7,  0,  0, -3},
        {  0,  0, -3,  0,  0, -8,  0, -2,  0},
        {  0,  0,  0,  0, -6,  0,  0, -5,  0},
        {  0,  0,  0, -5, -9,  0, -7,  0,  0},
        {  0,  0, -1, -8,  0,  0,  0, -4,  0},
    };
    solveSudoku(sudoku2);
    printSudoku(sudoku2);
}