#include "Circle.h"
#include <cmath>
#define PI 3.14159265358979323846


Circle::Circle(double radius)
{
	this->radius = radius;
	ference = 2 * PI * radius;
	area = PI * radius * radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
	ference = 2 * PI * radius;
	area = PI * radius * radius;
}

void Circle::setFerence(double ference) 
{
	this->ference = ference;
	radius = (ference / (2 * PI));
	area = PI * radius * radius;
}

void Circle::setArea(double area) 
{
	this->area = area;
	radius = sqrt(area / PI);
	ference = 2 * PI * radius;
}

double  Circle::getRadius() const 
{
	return radius;
}

double  Circle::getFerence() const 
{
	return ference;
}

double  Circle::getArea() const 
{
	return area;
}