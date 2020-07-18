#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using std::vector;
using std::cout;
using std::ifstream;
using std::string;

void PrintBoard(vector<vector<int>> v1) {
    for(vector<int> v : v1) {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << "\n";
    }
}

void ReadBoardFile(string path_to_file) {
    ifstream file1(path_to_file);
    if (file1)
    {
        cout << "File here" << "\n";
        string line;
        while (getline(file1, line))
        {
            cout << line << "\n";
        }
        
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
    ReadBoardFile("file_to_read/1.board");
}