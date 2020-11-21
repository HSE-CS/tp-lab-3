#define _USE_MATH_DEFINES
#include "Circle.h"
#include <cmath>

Circle::Circle(){
	setRadius(0);
}

Circle::Circle(double r) {
	setRadius(r);
}

void Circle::setRadius(double r) {
	this->radius = r;
	this->ference = 2 * M_PI * r;
	this->area = M_PI * r * r;
}

void Circle::setFerence(double L) {
	this->ference = L;
	this->radius = L / (2 * M_PI);
	this->area = this->radius * L / 2;
}

void Circle::setArea(double S) {
	this->area = S;
	this->radius = sqrt(S / M_PI);
	this->ference = 2 * S / this->radius;
}

double Circle::getRadius() {
	return this->radius;
}

double Circle::getFerence() {
	return this->ference;
}

double Circle::getArea() {
	return this->area;
}