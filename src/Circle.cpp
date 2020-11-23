#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

void Circle::setRadius(double rad) 
{
    this->rad = rad;
    fer = 2 * M_PI * rad;
    area = M_PI * rad * rad;
}

void Circle::setFerence(double fer) 
{
    this->fer = fer;
    rad = fer / M_PI / 2;
    area = M_PI * rad * rad;
}

void Circle::setArea(double area) 
{
    this->area = area;
    rad = sqrt(area / M_PI);
    fer = 2 * M_PI * rad;
}

double Circle::getRadius() 
{
    return rad;
}

double Circle::getFerence() 
{
    return fer;
}

double Circle::getArea() 
{
    return area;
}
