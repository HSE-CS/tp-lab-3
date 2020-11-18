#include <cstdlib>
#include "../include/Circle.h"
constexpr double pi = 3.14159265358979323846;
Circle::Circle(double radius){
	setRadius(radius);
}

void Circle::setRadius(double radius) {
	this->radius = radius;
	this->ference = 2 * pi * this->radius;
	this->area = pi * pow(this->radius, 2);
}

void Circle::setFerence(double ference) {
	this->ference = ference;
	this->radius = this->ference / (2 * pi);
	this->area = pi * pow(this->radius, 2);
}

void Circle::setArea(double area) {
	this->area = area;
	this->radius = sqrt(this->area / pi);
	this->ference = 2 * pi * this->radius;
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
