#define _USE_MATH_DEFINES 
#include <math.h>
#include "Circle.h"

Circle::Circle() {
	setRadius(0.0);
}

Circle::Circle(double radius) {
	setRadius(radius);
}

void Circle::setRadius(double radius) {
	this->ference = 2 * M_PI * radius;
	this->area = M_PI * pow(radius, 2);
	this->radius = radius;
}

void Circle::setFerence(double ference) {
	this->radius = ference / (M_PI) / 2;
	this->area = (ference * this->radius) / 2;
	this->ference = ference;
}

void Circle::setArea(double area) {
	this->radius = sqrt(area / M_PI);
	this->ference = 2 * area / this->radius;
	this->area = area;
}

const double Circle::getRadius() const {

	return this->radius;
}

const double Circle::getFerence() const {
	return this->ference;
}

const double Circle::getArea() const {
	return this->area;
}
