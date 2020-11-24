#include "Circle.h"
#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle(double radius)
{
    this->setRadius(radius);
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
    this->ference = 2 * radius * M_PI;
    this->area = M_PI * radius * radius; 
}

void Circle::setFerence(double ference)
{
    this->ference = ference;
    this->radius = (ference / 2) / M_PI;
    this->area = ference / 2 * this->radius;
}

void Circle::setArea(double area)
{
    this->area = area;
    this->radius = sqrt(area / M_PI);
    this->ference = 2 * this->radius * M_PI;
}

double Circle::getRadius()
{
    return this->radius;
}

double Circle::getFerence()
{
    return this->ference;
}

double Circle::getArea()
{
    return this->area;
}
