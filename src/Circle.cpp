#define _USE_MATH_DEFINES
#include "Circle.h"
#include <cmath>
using namespace std;

Circle::Circle(double new_radius) {
	setRadius(new_radius);
}

void Circle::setRadius(double new_radius) {
	radius = new_radius;
	calcByRadius();
}

void Circle::setFerence(double new_ference) {
	ference = new_ference;
	calcByFerence();
}

void Circle::setArea(double new_area) {
	area = new_area;
	calcByArea();
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

void Circle::calcByRadius() {
	ference = 2 * M_PI * radius;
	area = M_PI * pow(radius, 2);
}

void Circle::calcByFerence() {
	radius = ference / (2 * M_PI);
	area = M_PI * pow(radius, 2);
}

void Circle::calcByArea() {
	radius = sqrt(area / M_PI);
	ference = 2 * M_PI * radius;
}