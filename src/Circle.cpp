#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
#include "Circle.h"


Circle::Circle(double radius_input)
{
	radius = radius_input;
	ference = 2* M_PI * radius_input;
	area = M_PI * pow(radius_input,2);
}

void Circle::setRadius(double radius_input)
{
	this->radius = radius_input;
	this->ference = 2 * M_PI * radius_input;
	this->area = M_PI * pow(radius_input, 2);
}

void Circle::setFerence(double ference_input)
{
	this->radius = ference_input / (2 * M_PI);
	this->ference = ference_input;
	this->area = M_PI * this->radius * this->radius;
}

void Circle::setArea(double area_input)
{
	this->radius = sqrt(area_input / M_PI);
	this->ference = 2 * M_PI * this->radius;
	this->area = area_input;
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