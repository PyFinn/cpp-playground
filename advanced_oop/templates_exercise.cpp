#include <iostream>
#include <typeinfo>

template<typename T, typename U = int>

class ClassA {
public:
    T x;
    U y;

    ClassA() {
        std::cout << "Constructor Called" << "\n";
            std::cout << "x type:"<< typeid(x).name() << std::endl;
            std::cout << "y type:"<< typeid(y).name() << std::endl;
    }
};

template <typename Type>
  Type Sum(Type a, Type b) {
    return a+b;
}

template <typename Type, typename T2>
  Type Sum2(Type a, T2 b) {
    return a+b;
}

int main() {
    ClassA<char, char> classA;
    ClassA<char> classA2;

    std::cout << Sum<double>(20.0, 13.7) << std::endl;
    std::cout << Sum(20.0, 13.7) << std::endl;
    std::cout << Sum(20, 13) << std::endl;
    std::cout << Sum2(20.1, 13) << std::endl;
}