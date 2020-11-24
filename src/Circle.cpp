#include <iostream>
#include "Circle.h"

double Circle::findFerence(double r)
{
	return 2 * M_PI * r;
}
double Circle::findArea(double r)
{
	return M_PI * pow(r, 2);
}
double Circle::findRadiusFromFerence(double l)
{
	return l / (2 * M_PI);
}
double Circle::findRadiusFromArea(double s)
{
	return sqrt(s / M_PI);
}
void Circle::setRadius(double val)
{
	radius = val;
	ference = findFerence(radius);
	area = findArea(radius);
}
void Circle::setFerence(double val)
{
	ference = val;
	radius = findRadiusFromFerence(ference);
	area = findArea(radius);
}
void Circle::setArea(double val)
{
	area = val;
	radius = findRadiusFromArea(area);
	ference = findFerence(radius);
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