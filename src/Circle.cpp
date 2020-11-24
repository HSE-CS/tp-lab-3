#define _USE_MATH_DEFINES
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
	ference = 2*radius*M_PI;
	area = radius*radius*M_PI;
}

void Circle::setFerence(double ference)
{
	this->ference = ference;
	double rad = ference/(2*M_PI);
	radius = rad;
	area = rad * rad * M_PI;
}

void Circle::setArea(double area)
{
	this->area = area;
	double rad = sqrt(area/M_PI);
	radius = rad;
	ference = rad * 2 * M_PI;
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
