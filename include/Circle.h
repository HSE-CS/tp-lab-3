#include <cmath>
#define sqr(x) pow(x, 2)

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
private:
    double radius;
    double ference;
    double area;
public:
    Circle();
    Circle(double radius);
    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);
    double getRadius();
    double getFerence();
    double getArea();
};

#endif // CIRCLE_H
