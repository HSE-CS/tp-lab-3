#include "Circle.h"
#define _USE_MATH_DEFINES
#include <math.h>


Circle::Circle() {
	radius = 0.0;
	ference = 0.0;
	area = 0.0;
}

Circle::Circle(double rad) {
	setRadius(rad);
}


void Circle::setRadius(double rad) {
	radius = rad;
	double fer = 2 * M_PI * rad;
	if (fer != ference)
		setFerence(fer);
	double ar = M_PI * rad * rad;
	if (ar != area)
		setArea(ar);
}


void Circle::setFerence(double fer) {
	ference = fer;
	double rad = fer / (2 * M_PI);
	if (radius != rad) {
		setRadius(rad);
	}
}


void Circle::setArea(double ar) {
	area = ar;
	double rad = sqrt(ar / M_PI);
	if (radius != rad) {
		setRadius(rad);
	}
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