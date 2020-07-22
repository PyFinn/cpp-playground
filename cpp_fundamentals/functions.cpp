#include <iostream>
#include <vector>
using std::cout;
using std::string;
using std::vector;

//Function declared and defined here
int AdditionFunc(int a, int b) {
    return a + b;
}
void PrintStrings(string a, string b){
    cout << a << " " << b << "\n";
}
int SumFunc(vector<int> v1) {
    int sum_all_ints = 0;
    for (int i : v1)
    {
        sum_all_ints++;
    }
    return sum_all_ints;
}

int main() {
    cout << AdditionFunc(1, 1) << "\n";

    string s1 = "Hello";
    string s2 = "World";
    PrintStrings(s1, s2);

    vector<int> v{1,2,3};
    cout << SumFunc(v) << "\n";
}