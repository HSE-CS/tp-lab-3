#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle(double rv)
{
    radius = rv;
    ference = 2* M_PI * rv;
    area = M_PI * pow(rv,2);
}

void Circle::setRadius(double rv)
{
    radius = rv;
    ference = 2* M_PI * rv;
    area = M_PI * pow(rv,2);
}

void Circle::setFerence(double fv)
{
    radius = fv / (2*M_PI);
    ference = fv;
    area = M_PI * pow(radius,2);
}

void Circle::setArea(double av)
{
    radius = sqrt(av/M_PI);
    ference = 2*M_PI*radius;
    area = av;
}

double  Circle::getRadius() const
{
    return radius;
}

double  Circle::getFerence() const
{
    return ference;
}

double  Circle::getArea() const
{
    return area;
}
