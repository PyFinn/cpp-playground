#include <iostream>
#include <cmath>

#define PI 3.14159

class LineSegment {
    protected:
        double length;
    public:
        double getLength() {return length;}
        void setLength(double l) {
            length = l;
        }
};

class Circle {
    public:
        Circle(LineSegment& l):radius_(l) {}
        void setRadius(LineSegment& r) {
            radius_ = r;
        }
        double Area() {
            return PI*pow(Circle::radius_.getLength(),2);
        }
    private:
        LineSegment& radius_;
};

int main() {
    LineSegment radius;
    radius.setLength(3);
    Circle circle(radius);
    std::cout << circle.Area() << std::endl;
}