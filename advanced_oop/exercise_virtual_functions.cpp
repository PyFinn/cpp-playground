#include <iostream>
#include <cmath>
using std::cout;

#define PI 3.1415926

class Shape {
    public:
        Shape() {}
        virtual double Area() const = 0;
        virtual double Perimeter() const = 0;
};

class Rectangle : public Shape {
    private:
        double width = 0;
        double height = 0;
    public:
        Rectangle(double w, double h): width(w), height(h) {}

        virtual double Area() const override {
            std::cout << "Rectangle Area:" << width * height << "\n";
            return width * height;
        }

        virtual double Perimeter() const override {
        std::cout << "Rectangle PerimeterLength:" <<2*(width + height)<< "\n";
        return 2*(width + height);
    }
};

class Circle : public Shape{
    private:
        double radius = 0;
    public:
        Circle(double r): radius(r){}
        virtual double Area() const override{
            std::cout << "Circle Area:" <<PI*pow(radius,2)<< "\n";
            return  PI*pow(radius,2);
        }

        virtual double Perimeter() const override{
            std::cout << "Circle PerimeterLength:" <<2*PI*radius<< "\n";
            return 2*PI*radius;
        }
};

int main() {
     Shape** shapes = new Shape*[2];
    shapes[0] = new Circle(12.31);
    shapes[1] = new Rectangle(10, 6);
    for (int i = 0;i < 2;i++) {
        std::cout << "Area: " << shapes[i]->Area()<< "\n";
        std::cout << "Perimeter: " << shapes[i]->Perimeter() << "\n";
        }
}