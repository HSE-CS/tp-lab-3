#include"Circle.h"
#include<cmath>
#define _USE_MATH_DEFINES
Circle::Circle(double valueRad)
{
	const double PI = 3.141592653589793;
	radius = valueRad;
	ference = 2 * radius * PI;
	area = PI * radius * radius;
}

void Circle::setRadius(double value) 
{
	const double PI = 3.141592653589793;
	radius = value;
	ference = 2 * radius * PI;
	area = PI * radius * radius;
}

void Circle::setFerence(double value) 
{
	const double PI = 3.141592653589793;
	ference = value;
	radius = ference / (2 * PI);
	area = PI * radius * radius;
}

void Circle::setArea(double value) 
{
	const double PI = 3.141592653589793;
	area = value;
	radius = sqrt(area / PI);
	ference = 2 * radius * PI;
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