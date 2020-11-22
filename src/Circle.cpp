#include"Circle.h"
#include<cmath>
#define _USE_MATH_DEFINES
# define PI  3,14159265358979323846  /* pi */
Circle::Circle(double valueRad)
{
	radius = valueRad;
	ference = 2 * radius * PI;
	area = PI * radius * radius;
}

void Circle::setRadius(double value) 
{
	radius = value;
	ference = 2 * radius * PI;
	area = PI * radius * radius;
}

void Circle::setFerence(double value) 
{
	ference = value;
	radius = ference / (2 * PI);
	area = PI * radius * radius;
}

void Circle::setArea(double value) 
{
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
