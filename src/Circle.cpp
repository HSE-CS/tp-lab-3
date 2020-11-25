#include "Circle.h"
#include<cmath>

Circle::Circle(double r) {
	radius = r;
	ference = 2 * 3.14 * radius;
	area = 3.14 * radius * radius;
}

void Circle::setRadius(double r) {

	radius = r;
	ference = 2 * 3.14 * radius;
	area = 3.14 * radius * radius;
}

void Circle::setFerence(double f) {

	ference = f;
	radius = ference / (2 * 3.14);
	area = 3.14 * radius * radius;
}

void Circle::setArea(double a) {

	area = a;
	radius = sqrt(area / 3.14);
	ference = 2 * 3.14 * radius;
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