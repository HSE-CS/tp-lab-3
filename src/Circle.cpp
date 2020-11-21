#include "../include/Circle.h"
#include <math.h>

void Circle::setRadius(double rad)
{
	this->radius = rad;
	this->ference = 2 * pi * this->radius;
	this->area = pi * this->radius * this->radius;
}

void Circle::setFerence(double fer)
{
	this->ference = fer;
	this->radius = this->ference / (2 * pi);
	this->area = pi * this->radius * this->radius;
}

void Circle::setArea(double area)
{
	this->area = area;
	this->radius = sqrt(this->area / (pi));
	this->ference = 2 * pi * this->radius;
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
