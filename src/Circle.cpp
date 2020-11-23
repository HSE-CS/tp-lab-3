#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(double radius)
{
	setRadius(radius);
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
	ference = 2*radius*3.14;
	area = radius*radius*3.14;
}

void Circle::setFerence(double ference)
{
	this->ference = ference;
	double rad = ference/(2*3.14);
	radius = rad;
	area = rad * rad * 3.14;
}

void Circle::setArea(double area)
{
	this->area = area;
	double rad = sqrt(area/3.14);
	radius = rad;
	ference = rad * 2 * 3.14;
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
