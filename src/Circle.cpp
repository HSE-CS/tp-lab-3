#define _USE_MATH_DEFINES
#include "Circle.h"
#include <cmath>

void Circle::setRadius(double radius) {
	this->radius = radius;
	this->ference = 2 * M_PI * radius;
	this->area = M_PI * radius * radius;
}

void Circle::setFerence(double ference) {
	this->ference = ference;
	this->radius = ference / (2 * M_PI);
	this->area = M_PI * radius * radius;
}

void Circle::setArea(double area) {
	this->area = area;
	this->radius = sqrt(area / M_PI);
	this->ference = 2 * M_PI * radius;
}

double Circle::getRadius() {
	return radius;
}

double Circle::getFerence() {
	return ference;
}

double Circle::getArea() {
	return area;
}

Circle::Circle(double radius)
{
	setRadius(radius);
}