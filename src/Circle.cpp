#include "Circle.h"

#define _USE_MATH_DEFINES
#include <cmath>
const double pi{ M_PI };

Circle::Circle():radius{ 0.0 }, ference{ 0.0 }, area{ 0.0 } {};

Circle::Circle(double radius):radius{ 0.0 }, ference{ 0.0 }, area{ 0.0 } {
	this->setRadius(radius);
}

void Circle::setRadius(double radius) {
	this->radius = radius;
	this->ference = 2.0 * pi * radius;
	this->area = pi * radius * radius;
}

void Circle::setFerence(double ference) {
	this->radius = ference / (2.0 * pi);
	this->ference = ference;
	this->area = pi * this->radius * this->radius;
}

void Circle::setArea(double area) {
	this->radius = sqrt(area / pi);
	this->ference = 2.0 * pi * this->radius;
	this->area = area;
}

double Circle::getRadius() {
	return this->radius;
}

double Circle::getFerence() {
	return this->ference;
}

double Circle::getArea() {
	return this->area;
}
