#include <iostream>
using std::cout;

class Sphere {
    private:
        void Update(int rad);
        double calcVolume(int rad);
        int radius{0};
        double volume{0};
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
    Update(rad);
}

double Sphere::getVolume() {
    return Sphere::volume;
}

double Sphere::calcVolume(int rad) {
    return 4.1888 * (rad*rad*rad);
}

void Sphere::Update(int rad) {
    if (rad > 0) {
        Sphere::radius = rad;
        Sphere::volume = calcVolume(rad);
    }
}

int main() {
    Sphere sphere(5);
    cout << sphere.getVolume() << "\n";
    sphere.setRadius(2);
    cout << sphere.getVolume() << "\n";
}