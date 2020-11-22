#include "Circle.h"

void Circle::setRadius(double rad)
{
	radius = rad;
	ference = 2 * PI * radius;
	area = PI * (radius * radius);
};
void Circle::setFerence(double fer)
{
	ference = fer;
	radius = ference / (2 * PI);
	area = PI * (radius * radius);
};
void Circle::setArea(double s)
{
	area = s;
	radius = sqrt(area/PI);
	ference = 2 * PI * radius;
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
Circle::Circle(double rad)
{
	setRadius(rad);
};
