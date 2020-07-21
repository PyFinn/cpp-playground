#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::cout;
using std::string;
using std::vector;
using std::istringstream;

vector<int> ParseLine(string toParse) {
    vector<int> vctr;
    istringstream stream1(toParse);
    int n;
    char c;
    while (stream1 >> n >> c)
    {
        cout << n << c << "\n";
        vctr.push_back(n);
    }
    return vctr;
}

int main() {
    vector<int> n;
    n = ParseLine("1,0,0,0,0,");
}