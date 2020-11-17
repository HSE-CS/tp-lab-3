#include "Circle.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>


void Circle::setRadius(double rad)
{
	this->radius = rad;
	this->ference = (rad)*2 * M_PI;
	this->area = M_PI * pow(rad, 2);
}
void Circle::setFerence(double fer)
{
	this->ference = fer;
	this->radius = fer / M_PI / 2;
	this->area = (fer*this->radius)/2;
}
void Circle::setArea(double area)
{

	this->area = area;
	this->radius = sqrt(area/M_PI);
	this->ference = 2*area/this->radius;
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