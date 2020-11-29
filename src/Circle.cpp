#define _USE_MATH_DEFINES 
#include "Circle.h"

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

Circle::Circle(double r)
{
    radius = r;
    ference = 2 * M_PI * r;
    area = M_PI * r * r;
}

void Circle::setRadius(double r) {
    radius = r;
    ference = 2 * M_PI * radius;
    area = M_PI * radius * radius;
}

void Circle::setFerence(double f) {
    ference = f;
    radius = ference / (2 * M_PI);
    area = M_PI * radius * radius;
}

void Circle::setArea(double a) {
    area = a;
    radius = sqrt(area / M_PI);
    ference = 2 * M_PI * radius;
}
