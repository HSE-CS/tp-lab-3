#define _USE_MATH_DEFINES
#include <math.h>
#include "Circle.h"

using namespace std;

const double pi = M_PI;

void Circle::setRadius(double radius)
{
	this->radius = radius;
	this->ference = 2.0 * pi * radius;
	this->area = pi * pow(radius, 2.0);
}
void Circle::setFerence(double ference)
{
	this->ference = ference;
	this->radius = ference / (2.0 * pi);
	this->area = pi * pow(radius, 2.0);
}
void Circle::setArea(double area)
{
	this->area = area;
	this->radius = sqrt(area / pi);
	this->ference = 2.0 * pi * radius;
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