#define _USE_MATH_DEFINES
#include <cmath>

class Circle {
private:
    double radius;
    double ference;
    double area;
public:
    Circle(double rad);
    void setRadius(double rad);
    void setFerence(double fer);
    void setArea(double ar);
    double getRadius();
    double getFerence();
    double getArea();
};