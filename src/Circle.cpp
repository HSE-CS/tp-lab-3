#include "Circle.h"

Circle::Circle(double radius_) {
	this->setRadius(radius_);
}
void Circle::setRadius(double radius_) {
	radius = radius_;
	ference = 2 * _PI * radius_;
	area = _PI * pow(radius_,2);
}


void Circle::setFerence(double ference_) {
	ference = ference_;
	radius = ference_/(2 * _PI);
	area = _PI * pow(radius, 2);
}


void Circle::setArea(double area_) {
	area = area_;
	radius = pow(area_ / _PI, 1 / 2);
	ference = 2 * _PI * radius;
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