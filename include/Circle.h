#include <math.h>
#include <corecrt_math_defines.h>

#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

class Circle
{
private:
    double rad;
    double fer;
    double area;

public:
    void setRadius(double rad);
    void setFerence(double fer);
    void setArea(double area);
    double getRadius();
    double getFerence();
    double getArea();

    Circle() = default;

    explicit Circle(double rad)
    {
        this->rad = rad;
        fer = 2 * M_PI * rad;
        area = M_PI * rad * rad;
    }
};

#endif 