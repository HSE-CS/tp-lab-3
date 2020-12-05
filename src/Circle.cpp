
#include "Circle.h"

double Circle::ference_from_radius(double r) {
	return 2 * PI * r;
}

double Circle::area_from_radius(double r) {
	return PI * pow(r, 2);
}

double Circle::radius_from_ference(double f) {
	return f / (2 * PI);
}

double Circle::radius_from_area(double a) {
	return sqrt(a / PI);
}

void Circle::setRadius(double num) {
	radius = num;
	ference = ference_from_radius(num);
	area = area_from_radius(num);
}

void Circle::setFerence(double num) {
	radius = radius_from_ference(num);
	ference = num;
	area = area_from_radius(radius);
}

void Circle::setArea(double num) {
	radius = radius_from_area(num);
	ference = ference_from_radius(radius);
	area = num;
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