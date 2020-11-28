#include "Circle.h"

Circle::Circle(double newRadius)
{
    radius = newRadius;
    ference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
};

void Circle::setRadius(double newRadius)
{
    radius = newRadius;
    ference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
};

void Circle::setFerence(double newFerence)
{
    ference = newFerence;
    radius = ference / (2 * M_PI);
    area = M_PI * radius * radius;
};

void Circle::setArea(double newArea)
{
    area = newArea;
    radius = sqrt(area / M_PI);
    ference = 2 * M_PI * radius;
};

double Circle::getRadius()
{
    return radius;
};

double Circle::getFerence()
{
    return ference;
};

double Circle::getArea()
{
    return area;
};