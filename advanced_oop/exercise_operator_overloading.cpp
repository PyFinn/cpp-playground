#include <iostream>
using std::cout;

class Point {
    private:
        int x;
        int y;
    public:
        Point(int x = 0, int y = 1): x(x), y(y) {}

        Point operator - (Point const &object) {
            Point result;
            result.x = x - object.x;
            result.y = y - object.x;
            return result;
        }

        Point operator + (Point const &object) {
            Point result;
            result.x = x + object.x;
            result.y = y + object.y;
            return result;
        }

        void Print() {
            cout << "Point: " << Point::x << ", " << Point::y << std::endl;
        }
};

int main() {
    Point point1(2,2);
    point1.Print();

    Point point2(3,3);
    Point point3 = point1 + point2;
    point3.Print();
}