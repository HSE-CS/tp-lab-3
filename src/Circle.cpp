#include "Circle.h"

Circle::Circle(double rad)
{
    setRadius(rad);
}

void Circle::setRadius(double r)
{
    radius = r;
    area = radius * radius * PI;
    ference = 2 * PI * radius;
}

void Circle::setFerence(double f)
{
    ference = f;
    radius = ference / 2 / PI;
    area = PI * radius * radius;
}

void Circle::setArea(double a)
{
    area = a;
    radius = sqrt(area / PI);
    ference = 2 * PI * radius;
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