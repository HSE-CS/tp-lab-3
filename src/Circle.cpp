#include "Circle.h"
#include <math.h>


Circle::Circle()
{
	setRadius(0.0);
}

Circle::Circle(double newRadius)
{
	setRadius(newRadius);
}

void Circle::setRadius(double newRadius)
{
	radius = newRadius;
	ference = 2 * M_PI * radius;
	area = M_PI * pow(radius, 2);
}

void Circle::setFerence(double newFerence)
{
	ference = newFerence;
	radius = ference / (2 * M_PI);
	area = M_PI * pow(radius, 2);
}

void Circle::setArea(double newArea)
{
	area = newArea;
	radius = sqrt(area / M_PI);
	ference = 2 * M_PI * radius;
}

double Circle::getRadius() //returns only copy of the value -> user cant change it without method set
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
