#include "Circle.h"
#include <iostream>
#include "math.h"
using namespace std;

const double pi = 3.1415;

Circle::Circle(double newRadius)
{
	radius = newRadius;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}

void Circle::setRadius(double newRadius)
{
	radius = newRadius;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}

void Circle::setFerence(double newFerence)
{
	ference = newFerence;
	radius = ference / (2 * pi);
	area = 2 * pi * radius * radius;
}

void Circle::setArea(double newArea)
{
	area = newArea;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;
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