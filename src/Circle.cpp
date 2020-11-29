#include "Circle.h"

void Circle::setRadius(double _radius)
{
	double pi = 2 * acos(0.0);
	radius = _radius;
	ference = 2 * pi * radius;
	area = pi * pow(radius, 2);
}
void Circle::setFerence(double _ference)
{
	double pi = 2 * acos(0.0);
	ference = _ference;
	radius = ference / (2 * pi);
	area = pi * pow(radius, 2);
}
void Circle::setArea(double _area)
{
	double pi = 2 * acos(0.0);
	area = _area;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;;
}
double Circle::getRadius()
{
	return Circle::radius;
}
double Circle::getFerence()
{
	return Circle::ference;
}
double Circle::getArea()
{
	return Circle::area;
}