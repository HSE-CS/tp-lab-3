#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H
#define _USE_MATH_DEFINES
#include <math.h>

class Circle {
private:
    double radius;
    double ference;
    double area;

public:
    explicit Circle(const double r) :radius{ r } {
        ference = 2 * M_PI * radius;
        area = M_PI * pow(radius, 2);
    }

    void setRadius(double r);
    void setFerence(double f);
    void setArea(double a);
    double getRadius();
    double getFerence();
    double getArea();

};

#endif