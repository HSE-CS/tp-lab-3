#include "Circle.h"
#include <math.h>

void Circle::setRadius(double R)
{
	double pi = acos(-1.0);
	radius = R;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}

void Circle::setFerence(double F)
{
	double pi = 2 * acos(0.0);
	ference = F;
	radius = ference/(2 * pi);
	area = pi * radius * radius;
}

void Circle::setArea(double A)
{
	double pi = 2 * acos(0.0);
	area = A;
	radius = sqrt(area/pi);
	ference = 2 * pi * radius;;
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