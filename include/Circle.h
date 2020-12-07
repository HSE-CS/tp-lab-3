#include <iostream>
#include <math.h>

using namespace std;

class Circle {
public:
    Circle(double radius);

    double getRadius();

    void setRadius(double radius);

    double getFerence();

    void setFerence(double ference);

    double getArea();

    void setArea(double area);

private:
    double radius;
    double ference;
    double area;
    const double PI = acos(-1.0);
};
