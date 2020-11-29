#include "circle.h"
#include <math.h>

const double PI = acos(-1.0);

Circle::Circle(double _radius) {
	Circle::setRadius(_radius);
}

double Circle::getRadius() const {
	return radius;
}

void Circle::setRadius(double _radius) {
	Circle::radius = _radius;
	Circle::ference = 2 * PI * radius;
	Circle::area = 3.14 * pow(radius, 2);
}

double Circle::getFerence() const {
	return ference;
}

void Circle::setFerence(double _ference) {
	Circle::ference = _ference;
	Circle::radius = ference / (2 * PI);
	Circle::area = PI * pow(Circle::radius, 2);
}

double Circle::getArea() const {
	return area;
}

void Circle::setArea(double _area) {
	Circle::area = _area;
	Circle::radius = pow(area / PI, 0.5);
	Circle::ference = 2 * PI * Circle::radius;
}