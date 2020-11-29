#include "Circle.h"

#include <cmath>

const double pi = 3.141592653589793;

Circle::Circle(const double radius)
{
	setRadius(radius);
}

void Circle::setRadius(const double r)
{
	radius = r;
	ference = 2.0 * pi * r;
	area = pi * r * r;
}

void Circle::setFerence(const double l)
{
	ference = l;
	radius = l / (2.0 * pi);
	area = pi * radius * radius;
}

void Circle::setArea(const double area)
{
	this->area = area;
	radius = std::sqrt(area / pi);
	ference = 2.0 * pi * radius;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getFerence() const
{
	return ference;
}

double Circle::getArea() const
{
	return area;
}
