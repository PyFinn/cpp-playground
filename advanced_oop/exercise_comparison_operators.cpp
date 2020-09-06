#include <iostream>
#include <typeinfo>

template <typename T>
T ReturnMax(T a, T b) {
    if (a > b) {
        return a;
    } else
    {
        return b;
    }
}

int main() {
    int num1 = 50;
    int num2 = 10;
    int res = ReturnMax(num1, num2);
    std::cout << "Bigger one is: " << res << "\n";
    std::cout << "res type:"<< typeid(res).name() << std::endl;

    double n1 = 45.65;
    double n2 = 100.45;
    double res2 = ReturnMax(n1, n2);

    std::cout << "Bigger one is: " << res2 << "\n";
    std::cout << "res2 type:"<< typeid(res2).name() << std::endl;
}