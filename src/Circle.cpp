#define _USE_MATH_DEFINES 
#include <cmath>
#include "Circle.h"

Circle::Circle() {
	setRadius(0.0);
}

Circle::Circle(double radius) {
	setRadius(radius);
}
void Circle::setRadius(double radius) {
	this->ference = 2 * M_PI * radius;
	this->area = M_PI * radius * radius;
	this->radius = radius;
}

void Circle::setFerence(double ference) {
    this->radius = ference / (2 * M_PI);
	this->area = ference * ference  /( 4 * M_PI);
	this->ference = ference;
}

void Circle::setArea(double area) {
	this->radius = sqrt(area / M_PI);
	this->ference = 2 * M_PI * sqrt(area / M_PI);
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