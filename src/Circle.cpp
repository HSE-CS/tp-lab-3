#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

void Circle::setRadius(double radius) 
{
    this->radius = radius;
    ference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
}

void Circle::setFerence(double ference) 
{
    this->ference = ference;
    radius = ference / M_PI / 2;
    area = M_PI * radius * radius;
}

void Circle::setArea(double area) 
{
    this->area = area;
    radius = sqrt(area / M_PI);
    ference = 2 * M_PI * radius;
}

double Circle::getRadius() 
{
    return radius;
}

double Circle::getFerence() 
{
    return ference;
}

double Circle::getArea() 
{
    return area;
}