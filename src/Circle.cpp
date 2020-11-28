#define _USE_MATH_DEFINES
#include "Circle.h"
#include "cmath"

Circle::Circle() {
	setRadius(0);
}

Circle::Circle(double r) {
	setRadius(r);
}

void Circle::setRadius(double new_r) {

	radius = new_r;
	ference = 2 * M_PI * radius;
	area = M_PI * radius * radius;
}

void Circle::setFerence(double new_f) {

	ference = new_f;
	radius = ference / (2 * M_PI);
	area = M_PI * radius * radius;
}

void Circle::setArea(double new_area) {

	area = new_area;
	radius = sqrt(area / M_PI);
	ference = 2 * M_PI * radius;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::getFerence() const {
	return ference;
}

double Circle::getArea() const {
	return area;
}