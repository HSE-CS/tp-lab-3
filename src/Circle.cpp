#define _USE_MATH_DEFINES
#include "Circle.h"
#include <iostream>
#include <cmath>

void Circle::setRadius(double r) {
	radius = r;
	ference = 2 * M_PI * r;
	area = M_PI * r * r;
}

void Circle::setFerence(double f) {
	radius = f/M_PI;
	ference = f;
	area = M_PI * radius * radius;
}

void Circle::setArea(double a){
	radius = sqrt(a/M_PI);
	ference = 2 * M_PI * radius;
	area = a;
}

double Circle::getRadius() {
	return radius;
}

double Circle::getFerence(){
	return ference;
}

double Circle::getArea(){
	return area;
}