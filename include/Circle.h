#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
//#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#define M_PI 3.1415926535897933

class Circle {
private:
	double radius;
	double ference;
	double area;
public:
	Circle();
	Circle(double);

	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);

	double getRadius();
	double getFerence();
	double getArea();
};
#endif //CIRCLE_H