#include "Circle.h"

Circle::Circle() {
	setRadius(1);
	setFerence(2 * M_PI * this->radius);
	setArea(M_PI * pow(this->radius, 2));
}
Circle::Circle(double radius) {
	setRadius(radius);
	setFerence(2 * M_PI * this->radius);
	setArea(M_PI * pow(this->radius, 2));
}

void Circle::setRadius(double radius) {
	this->radius = radius;
	this->ference = 2 * M_PI * this->radius;
	this->area = M_PI * pow(this->radius, 2);
}
void Circle::setFerence(double ference) {
	double radius = ference / (M_PI * 2);
	setRadius(radius);
}
void Circle::setArea(double area) {
	double radius = sqrt(this->area / M_PI);
	setRadius(radius);
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
