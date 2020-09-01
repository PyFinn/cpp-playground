#include <iostream>
using std::cout;

class Square {
    private:
        friend class Rectangle;
        int side;
    public:
        Square(int s) : side(s) {}
};

class Rectangle {
    public:
        Rectangle(Square& sq): width(sq.side), height(sq.side) {};

        float Area() const{
        return width*height;
    }
    private:
        int width;
        int height;
};

int main() {
    Square square(4);
    Rectangle rectangle(square);
    cout << rectangle.Area() <<  std::endl;
}