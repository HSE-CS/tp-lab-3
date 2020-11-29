#ifndef _CIRCLE_H
#define _CIRCLE_H_
#include<cmath>
#include <iostream>

using namespace std;

class Circle
{
private:
    double radius;
    double ference;
    double area;
public:
    Circle(double _radius)
    {
        double pi = 2 * acos(0.0);
        radius = _radius;
        ference = 2 * pi * radius;
        area = pi * pow(radius, 2);
    }
    void setRadius(double _radius);
    void setFerence(double _ference);
    void setArea(double _area);
    double getRadius();
    double getFerence();
    double getArea();
};
#endif