#include <iostream>
#include <vector>

template<class T>

class Container {
    std::vector<T> arr;
    int s;
public:
    Container() : s(0) {
        arr.clear();
    }

    int size(void) const {
        return Container::s;
    }

    void add(T el) {
        Container::s++;
        arr.push_back(el);
    }

    void print(void)
        {
            for (T i : arr) {
                std::cout << i << " ";
            }
            std::cout << "\n" << "Container::size: " << Container::s << "\n";
        }
};

int main() {
    Container<double> obj;
    obj.add(2.00329132);
    obj.print();
    obj.add(8.83);
    obj.print();

    Container<char> obj2;
    obj2.add('A');
    obj2.print();
    obj2.add('b');
    obj2.print();
}