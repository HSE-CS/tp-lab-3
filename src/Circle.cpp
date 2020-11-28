#include "Circle.h"

Circle::Circle(double radius)
{
	this->radius = radius;
	this->ference = 2 * M_PI * radius;
	this->area = M_PI * pow(radius, 2);
}

void Circle::setRadius(const double radius) 
{
	this->radius = radius;
	this->ference = 2 * M_PI * radius;
	this->area = M_PI * pow(radius,2);
}

void Circle::setFerence(double ference) 
{
	this->ference = ference;
	this->radius = ference / (2.0 * M_PI);
	this->area = M_PI * pow(radius, 2);
}

void Circle::setArea(double area) 
{
	this->area = area;
	this->radius = sqrt(area / M_PI);
	this->ference = 2 * M_PI * radius;
}

const double Circle::getRadius() 
{
	return this->radius;
}

const double Circle::getFerence() 
{
	return this->ference;
}

const double Circle::getArea() 
{
	return this->area;
}