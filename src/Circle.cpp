#define _USE_MATH_DEFINES
#include "Circle.h"
#include <iostream>
#include <cmath>

Circle::Circle() {

	radius = 0.0;
	ference = 0.0;
	area = 0.0;

}

Circle::Circle(double rad) {

	radius = rad;
	ference = 2 * M_PI * radius;
	area = M_PI * pow(radius, 2);

}

void Circle::setRadius(double rad) {

	radius = rad;
	ference = 2 * M_PI * radius;
	area = M_PI * pow(radius, 2);

}

void Circle::setFerence(double fer) {

	ference = fer;
	radius = ference / (2 * M_PI);
	area = M_PI * pow(radius, 2);

}

void Circle::setArea(double ar) {

	area = ar;
	radius = sqrt(area / M_PI);
	ference = 2 * M_PI * radius;

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