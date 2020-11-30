#include "Circle.h"
#include<cmath>
#define M_PI 3.14159265358979323846

using namespace std;

Circle::Circle(double r) {
	radius = r;
	ference = 2 * M_PI * radius;
	area = M_PI * radius * radius;
}

void Circle::setRadius(double r) {

	radius = r;
	ference = 2 * M_PI * radius;
	area = M_PI * radius * radius;
}

void Circle::setFerence(double f) {

	ference = f;
	radius = ference / (2 * M_PI);
	area = M_PI * radius * radius;
}

void Circle::setArea(double a) {

	area = a;
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