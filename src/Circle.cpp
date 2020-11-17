#include "Circle.h"
double make_radius_ference(double input);
double make_radius_area(double input);
double make_area(double input);
double make_ference(double input);

Circle::Circle(double rad) {
	this->radius = rad;
	this->area = make_area(rad);
	this->ference = make_ference(rad);
}
void Circle::setRadius(double input) {
	this-> radius = input;
	this-> ference = make_ference(radius);
	this-> area = make_area(radius);
}
void Circle::setFerence(double input) {
	this-> ference = input;
	this-> radius = make_radius_ference(ference);
	this-> area = make_area(radius);
}
void Circle::setArea(double input) {
	this-> area = input;
	this-> radius = make_radius_area(area);
	this-> ference = make_ference(radius);
}

double make_radius_ference(double input) {
	return input / (2 * M_PI);
}
double make_radius_area(double input) {
	return pow(input / M_PI, 0.5);
}
double make_area(double input) {
	return M_PI * pow(input, 2);
}
double make_ference(double input) {
	return 2 * M_PI * input;
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

