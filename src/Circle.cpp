#define _USE_MATH_DEFINES
#include "Circle.h"
#include <cmath>

Circle::Circle(double r) {
	radius = r;
	ference = 2 * M_PI * r;
	area = M_PI * r * r;
}

void Circle::setRadius(double r)
{
	this->radius = r;
	this->ference = 2 * M_PI * r;
	this->area = M_PI * r * r;
}

void Circle::setFerence(double f)
{
	this->radius = f / 2 / M_PI;
	this->ference = f;
	this->area = M_PI * this->radius * this->radius;
}

void Circle::setArea(double a)
{
	this->radius = sqrt(a / M_PI);
	this->ference = 2 * M_PI * this->radius;
	this->area = a;
}


double Circle::getRadius()
{
	return this->radius;
}

double Circle::getFerence()
{
	return this->ference;
}

double Circle::getArea()
{
	return this->area;
}

