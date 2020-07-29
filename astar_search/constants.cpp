#include <iostream>
#include <vector>

using std::cout;

void example1() {
    int i;
    cout << "Enter a Integer value: ";
    std::cin >> i;
    const int j = i * 2;

    constexpr int k = 3;
    cout << j << "\n";
    cout << k << "\n";
}

/*
A common usage of const is to guard against accidentally changing a variable,
especially when it is passed-by-reference as a function argument.
*/

int sum(const std::vector<int> &v)
{
    int sum = 0;
    for(int i : v)
        sum += i;
    return sum;
}
/*
The major difference between const and constexpr, is that constexpr must be evaluated at compile time.
*/
int main() {
    example1();
    sum({0,1,2,3});
}