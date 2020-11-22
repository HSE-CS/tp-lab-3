#pragma once
#include <cmath>
#define PI 3.14159265358979323846

class Circle
{
private:
    double radius;
    double ference;
    double area;
public:
    Circle(double rad);
    void setRadius(double rad);
    void setFerence(double fer);
    void setArea(double s);
    double getRadius();
    double getFerence();
    double getArea();
};