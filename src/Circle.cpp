#include "Circle.h"
#include <cmath>

Circle::Circle(double r) {
	radius = r;
	ference = 2 * 3.14 * r;
	area = 3.14 * r * r;
}

void Circle::setRadius(double r)
{
	this->radius = r;
	this->ference = 2 * 3.14 * r;
	this->area = 3.14 * r * r;
}

void Circle::setFerence(double f)
{
	this->radius = f / (2 * 3.14);
	this->ference = f;
	this->area = 3.14 * this->radius * this->radius;
}

void Circle::setArea(double a)
{
	this->radius = sqrt(a / 3.14);
	this->ference = 2 * 3.14 * this->radius;
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

