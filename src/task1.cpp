#include "task1.h"

Circle::Circle() {
	setRadius(1);
	setFerence(2 * M_PI * getRadius());
	setArea(M_PI * pow(getRadius(), 2));
}
Circle::Circle(double radius) {
	setRadius(radius);
	setFerence(2 * M_PI * getRadius());
	setArea(M_PI * pow(getRadius(), 2));
}

void Circle::setRadius(double radius) {
	this->radius = radius;
	setFerence(2 * M_PI * getRadius());
	setArea(M_PI * pow(getRadius(), 2));
}
void Circle::setFerence(double ference) {
	this->ference = ference;
	setRadius(getFerence() / (M_PI * 2));
	setArea(M_PI * pow(getRadius(), 2));
}
void Circle::setArea(double area) {
	this->area = area;
	setRadius(sqrt(getArea() / M_PI));
	setFerence(2 * M_PI * getRadius());
}

double Circle::getRadius() {
	return this->radius;
}
double Circle::getFerence() {
	return this->ference;
}
double Circle::getArea() {
	return this->radius;
}

double Circle::earthAndRope()
{
	Circle earth(6378100);
	Circle rope;
	rope.setFerence(earth.getFerence() + 1);

	return rope.getRadius() - earth.getRadius();
}
