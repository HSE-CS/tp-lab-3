#include "../include/Circle.h"
#include <math.h>

void Circle::setRadius(double rad)
{
	this->radius = rad;
	this->ference = 2 * M_PI * this->radius;
	this->area = M_PI * this->radius * this->radius;
}

void Circle::setFerence(double fer)
{
	this->ference = fer;
	this->radius = this->ference / (2 * M_PI);
	this->area = M_PI * this->radius * this->radius;
}

void Circle::setArea(double area)
{
	this->area = area;
	this->radius = sqrt(this->area / (M_PI));
	this->ference = 2 * M_PI * this->radius;
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
