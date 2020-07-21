#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using std::vector;
using std::cout;
using std::ifstream;
using std::string;
using std::istringstream;

vector<int> ParseLine(string toParse) {
    vector<int> vctr;
    istringstream stream1(toParse);
    int n;
    char c;
    while (stream1 >> n >> c)
    {
        vctr.push_back(n);
    }
    return vctr;
}

vector<vector<int>> ReadBoardFile(string path_to_file) {
    vector<vector<int>> resultVector;
    ifstream file1(path_to_file);
    if (file1)
    {
        cout << "File here" << "\n";
        string line;
        while (getline(file1, line))
        {
            resultVector.push_back(ParseLine(line));
        }
    }
    return resultVector;
}

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
    PrintBoard(ReadBoardFile("file_to_read/1.board"));
}