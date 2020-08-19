#include <iostream>
using std::cout;

namespace English {
    void Hello() {cout << "Hello World" << "\n";}
};

namespace Spanish {
    void Hello() {cout << "Hola Mundo\n";}
};

int main() {
    English::Hello();
    Spanish::Hello();
}