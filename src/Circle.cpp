#define _USE_MATH_DEFINES 
#include <cmath>
#include "Circle.h"

void Circle::setRadius(double r) {
	radius = r; ference = r * 2 * M_PI; area = r * r*M_PI;
};
void Circle::setFerence(double x) {
	ference = x; radius = x / (2 * M_PI); area = radius * radius;
};
void Circle::setArea(double x) {
	area = x; radius = sqrt(x / M_PI); ference = radius * 2 * M_PI;
};
double Circle::getRadius() {
	return radius;
};
double Circle::getFerence() {
	return ference;
};
double Circle::getArea() {
	return area;
};
Circle::Circle(double r) :radius(r), ference(r * 2 * M_PI), area(r*r*M_PI)
{};