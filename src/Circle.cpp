#include "Circle.h"
#include <cmath>
#define M_PI 3.14159265358979323846

Circle::Circle(double radius=0)
{
	setRadius(radius);
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
	this->ference = 2 * M_PI * radius;
	this->area = M_PI * radius * radius;
}

void Circle::setFerence(double ference)
{
	this->ference = ference;
	this->radius = ference / (2 * M_PI);
	this->area = ference / 2 * this->radius;
}

void Circle::setArea(double area)
{
	this->area = area;
	this->radius = sqrt(area / M_PI);
	this->ference = 2 * M_PI * this->radius;
}

double Circle::getRadius() const
{
	return this->radius;
}

double Circle::getFerence() const
{
	return this->ference;
}

double Circle::getArea() const
{
	return this->area;
}
