#include "Circle.h"

Circle::Circle(double radius){
	setRadius(radius);
}

void Circle::setRadius(double radius){
    this->radius = radius;
	ference = 2 * M_PI * radius;
	area = M_PI * radius * radius;
}

void Circle::setFerence(double ference){
    this->ference = ference;
    radius = ference / (M_PI * 2);
	area = ference * radius * 0.5;
}

void Circle::setArea(double area){
    this->area = area;
	radius = sqrt(area / M_PI);
	ference = 2 * area / radius;
}

double Circle::getRadius() const{
	return this->radius;
}

double Circle::getFerence() const{
	return this->ference;
}

double Circle::getArea() const{
	return this->area;
}