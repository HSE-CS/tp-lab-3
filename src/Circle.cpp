#define _USE_MATH_DEFINES
#include "Circle.h"
#include <iostream>
#include <cmath>

void Circle::setRadius() {
	std::cin >> radius;

	ference = getFerence(radius);
	area = getArea(radius);
}

void Circle::setFerence() {
	std::cin >> ference;

	radius = getRadius(ference, area, 1);
	area = getArea(radius);
}

void Circle::setArea(){
	std::cin >> area;

	radius = getRadius(ference, area, 2);
	ference = getFerence(radius);
}

double Circle::getRadius(double ference, double area, int key) {
	switch (key) {
	case 1:
		radius = ference / (2 * 3.14);
		break;
	case 2:
		radius = sqrt(area / 3.14);
		break;
	}
	return radius;
}

double Circle::getFerence(double radius){
	ference = 2 * 3.14 * radius;
	return ference;
}

double Circle::getArea(double radius){
	area = 3.14 * radius * radius;
	return area;
}