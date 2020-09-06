#include <cassert>
#include <string>

template <typename T>

T Max(T a, T b) {
    return a>b ? a : b;
}

int main() {
    assert(Max<int>(2,4) == 4);
    assert(Max<double>(-1.0,-4.2) == -1.0);
    assert(Max<char>('a','b') == 'b');
}