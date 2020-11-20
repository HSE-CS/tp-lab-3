#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.h"

Circle::Circle() {};

Circle::Circle(double new_radius) {
	radius = new_radius;
	ference = 2 * M_PI * radius;
	area = M_PI * pow(radius, 2);
}
void Circle::setRadius(double new_radius) {
	radius = new_radius;
	ference = 2 * M_PI * radius;
	area = M_PI * pow(radius, 2);
}

void Circle::setFerence(double new_ference) {
	ference = new_ference;
	radius = ference / (2 * M_PI);
	area = M_PI * pow(radius, 2);
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