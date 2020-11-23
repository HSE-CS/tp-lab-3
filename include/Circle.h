#define _USE_MATH_DEFINES
#include <math.h>

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

class Circle 
{
private:
    double radius;
    double ference;
    double area;

public:
    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);
    double getRadius();
    double getFerence();
    double getArea();

    Circle() = default;

    explicit Circle(double radius) 
    {
        this->radius = radius;
        ference = 2 * M_PI * radius;
        area = M_PI * radius * radius;
    }
};

#endif