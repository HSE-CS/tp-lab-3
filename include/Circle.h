#pragma once

#include <iostream>
#include <cmath>

#define PI 3.14159265358979323846

class Circle
{
private:
    double radius;
    double ference;
    double area;
public:
    void setRadius(double r);

    Circle(double rad);

    void setFerence(double f);

    void setArea(double a);

    double getRadius();

    double getFerence();

    double getArea();
};