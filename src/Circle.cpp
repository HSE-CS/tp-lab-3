#include <math.h>
#include <iostream>
#include <algorithm>
#include "Circle.h"
# define PI  3.14159265358979323846

using namespace std;

Circle::Circle() :radius{0.0}, ference{0.0}, area{0.0} {};

Circle::Circle(double radius):radius{ 0.0 }, ference{ 0.0 }, area{ 0.0 } 
{
	this->setRadius(radius);
}


void Circle::setRadius(double rad) {
	radius = rad;
	ference = 2 * PI * rad;
	area = pow(rad, 2) * PI;
}

void Circle::setArea(double ar) {
	radius = sqrt(ar / PI);
	ference = 2 * PI * radius;
	area = ar;
}

void Circle::setFerence(double fer) {
	radius = fer / PI * 2;
	ference = fer;
	area = PI * pow(radius, 2);
}

double Circle::getArea(){
	return area;
}

double Circle::getRadius(){
	return radius;
}

double Circle::getFerence() {
	return ference;
}