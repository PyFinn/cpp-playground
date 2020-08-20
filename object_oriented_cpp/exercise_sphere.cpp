#include <iostream>
using std::cout;

class Sphere {
    private:
        int radius{0};
    public:
        Sphere(int rad);
        void setRadius(int rad);
        double getVolume();
        const int getRadius() {return radius;}
};

Sphere::Sphere(int rad) {
    setRadius(rad);
}

void Sphere::setRadius(int rad) {
    Sphere::radius = rad;
}

double Sphere::getVolume() {
    return 4.1888 * (radius*radius*radius);
}

int main() {
    Sphere sphere(5);
    cout << sphere.getVolume() << "\n";
}