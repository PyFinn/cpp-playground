#include <iostream>
using std::cout;

class Pyramid
{
private:
    int length;
    int width;
    int height;
public:
    Pyramid(int l, int w, int h);

    int Length() {return length;}
    int Width() {return width;}
    int Height() {return height;}

    void setLength(int l);
    void setWidth(int w);
    void setHeight(int h);
    double calcVolume();
    double calcSurfaceArea();
};

Pyramid::Pyramid(int l, int w, int h) {
    setLength(l);
    setWidth(w);
    setHeight(h);
}

void Pyramid::setLength(int l) {
    Pyramid::length = l;
}

void Pyramid::setWidth(int w) {
    Pyramid::width = w;
}

void Pyramid::setHeight(int h) {
    Pyramid::height = h;
}

double Pyramid::calcVolume() {
    return length * width * height / 3;
}

double Pyramid::calcSurfaceArea() {
    double m = length * width;
    double mf = 4 * (0.5 * length * height);
    return m + mf;
}

int main() {
    Pyramid pyramid(1,1,3);

    cout << pyramid.calcVolume() << "\n";
    cout << pyramid.calcSurfaceArea() << "\n";
}