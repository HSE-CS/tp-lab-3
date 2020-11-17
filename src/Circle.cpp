#include "Circle.h"
#include <cmath>
using namespace std;

const double PI = 3.14159265;

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
	ference = 2 * PI * radius;
	area = PI * pow(radius, 2);
}

void Circle::calcByFerence() {
	radius = ference / (2 * PI);
	area = PI * pow(radius, 2);
}

void Circle::calcByArea() {
	radius = sqrt(area / PI);
	ference = 2 * PI * radius;
}