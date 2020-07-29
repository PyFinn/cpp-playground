#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

using std::cout;
using std::vector;
using std::ifstream;
using std::string;
using std::istringstream;
using std::sort;

enum class State {kEmpty, kObstacle, kClosed, kPath};
const int delta[4][2]{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

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
    case State::kPath:
        return "🚗 ";
        break;
    default:
        return "0 ";
        break;
    }
}

bool Compare(vector<int> &v1, vector<int> &v2) {
    if (v1[2] + v1[3] > v2[2] + v2[3])
    {
        return true;
    }
    return false;
    
}

void CellSort(vector<vector<int>> *v) {
  sort(v->begin(), v->end(), Compare);
}

int Heuristic(int x1, int x2, int y1, int y2) {
    return abs(x2 - x1) + abs(y2 - y1);
}

void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &openNodes, vector<vector<State>> &board) {
    vector<int> node{x,y,g,h};
    openNodes.push_back(node);
    board[x][y] = State::kClosed;
}

bool checkValidCell(int x, int y, vector<vector<State>> &grid) {
    bool on_grid_x = (x >= 0 && x < grid.size());
    bool on_grid_y = (y >= 0 && y < grid[0].size());
    if (on_grid_x && on_grid_y)
        return grid[x][y] == State::kEmpty;//return T or F
    return false;
}

void ExpandNeighbors(vector<int> &node, vector<vector<int>> &open_vector, vector<vector<State>> &grid, int *goal) {
    //Get current nodes data
    int nodeX = node[0];
    int nodeY = node[1];
    int nodeG = node[2];
    int nodeH = node[3];
    int nextG = nodeG + 1;
    cout << __func__ << ", " << nodeX << ", " << nodeY << "\n";

    for (int i = 0; i < 4; i++)
    {
        int nextX = nodeX + delta[i][0];
        int nextY = nodeY + delta[i][1];

        bool valid = checkValidCell(nextX, nextY, grid);
        if (valid)
        {
            int nextH = Heuristic(nextX, goal[0], nextY, goal[1]);
            AddToOpen(nextX, nextY, nextG, nextH, open_vector, grid);
            cout << nextX << ", " << nextY << "\n";
        }
    }
    
    }

vector<vector<State>> Search(vector<vector<State>> grid, int init[2], int goal[2]){
    vector<vector<int>> open {};

    AddToOpen(init[0], init[1], 0, Heuristic(init[0], goal[0], init[1], goal[1]), open, grid);

    cout << open.size() << "\n";

    while (open.size() > 0)
    {
        CellSort(&open);
        vector<int> lowestFNode = open.back();

        open.pop_back();
        int x = lowestFNode[0];
        int y = lowestFNode[1];
        grid[x][y] = State::kPath;

        if (x == goal[0] && y == goal[1])
        {
            return grid;
        }
        ExpandNeighbors(lowestFNode, open, grid, goal);
    }
    
    cout << "No path found!" << "\n";
    return std::vector<vector<State>>{};
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
    int endPoint[2] = {4 , 5};
    vector<vector<State>> solution = Search(board, startPoint, endPoint);
    PrintBoard(solution);
}