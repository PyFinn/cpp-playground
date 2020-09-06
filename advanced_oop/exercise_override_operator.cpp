#include <iostream>
#include <cassert>
#include <cmath>

#define PI 3.1415926

class ParticleModel {
public:
    virtual void Move(double v, double phi) {
        theta += phi;
        x += v * cos(theta);
        y += v * cos(theta);
    }
    int x = 0;
    int y = 0;

    double theta = 0;
};

class BicycleModel : public ParticleModel {
public:
    void Move(double v, double phi) override {
        theta += v / L * tan(phi);
        x += v * cos(theta);
        y += v * cos(theta);
    }
private:
    double L = 0;
};

int main() {
    ParticleModel particle;
    BicycleModel bicycle;

    particle.Move(10, PI/9);
    bicycle.Move(10, PI/9);

    assert(particle.x != bicycle.x);
    assert(particle.y != bicycle.y);
    assert(particle.theta != bicycle.theta);
}