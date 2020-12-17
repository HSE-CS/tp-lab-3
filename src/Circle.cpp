#include "Circle.h"
#include <math.h>
#include <iostream>
const double pi = 3.1415;
using namespace std;


Circle::Circle(double Radius1) {
	radius = Radius1;
	ference = 2 * pi * Radius1;
	area = pi * Radius1 * Radius1;
}
void Circle::setRadius(double Radius1) {
	radius = Radius1;
	ference = 2 * pi * Radius1;
	area = pi * Radius1 * Radius1;
}

void Circle::setFerence(double Ference1) {
	ference = Ference1;
	radius = ference / (2 * pi);
	area = pi * radius * radius;
}

void Circle::setArea(double Area1) {
	area = Area1;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;
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