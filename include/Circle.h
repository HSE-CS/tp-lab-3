#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>

// #define M_PI 3.14159265358979323846

class Circle
{
private:
    double radius;
    double ference;
    double area;

public:
    Circle(double);
    void setRadius(double);
    void setFerence(double);
    void setArea(double);
    double getRadius();
    double getFerence();
    double getArea();
};

#endif