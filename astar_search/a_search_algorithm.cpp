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

enum class State {kEmpty, kObstacle, kClosed};

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

int Heuristic(int x1, int x2, int y1, int y2) {
    return abs(x2 - x1) + abs(y2 - y1);
}

void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &openNodes, vector<vector<State>> &board) {
    vector<int> node{x,y,g,h};
    openNodes.push_back(node);
    board[x][y] = State::kClosed;
}

vector<vector<State>> Search(vector<vector<State>> grid, int init[2], int goal[2]){
    vector<vector<int>> open {};

    AddToOpen(init[0], init[1], 0, Heuristic(init[0], goal[0], init[1], goal[1]), open, grid);
    return vector<vector<State>>{};
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
    auto board = ReadBoardFile("cpp_fundamentals/file_to_read/1.board");
    int startPoint[2] = {0 , 0};
    int endPoint[2] = {4 , 4};
    vector<vector<State>> solution = Search(board, startPoint, endPoint);
    PrintBoard(solution);
}