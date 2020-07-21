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

enum class State {kEmpty, kObstacle};

vector<State> ParseLine(string toParse) {
    vector<State> vctr;
    State curstate;
    istringstream stream1(toParse);
    int n;
    char c;
    while (stream1 >> n >> c)
    {
        if (n==0){
          curstate = State::kEmpty;
      }else if(n==1){
          curstate = State::kObstacle;
      }
      vctr.push_back(curstate);
    }
    return vctr;
}

vector<vector<State>> ReadBoardFile(string path_to_file) {
    vector<vector<State>> resultVector;
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

string CellString(State characterState) {
    switch (characterState)
    {
    case State::kEmpty:
        return "0 ";
        break;
    case State::kObstacle:
        return "⛰️ ";
        break;
    default:
        return "0 ";
        break;
    }
}

void PrintBoard(vector<vector<State>> v1) {
    for(vector<State> v : v1) {
        for (int i = 0; i < v.size(); i++)
        {
            cout << CellString(v[i]);
        }
        cout << "\n";
    }
}
int main() {
    PrintBoard(ReadBoardFile("file_to_read/1.board"));
}