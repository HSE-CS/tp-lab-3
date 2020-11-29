#pragma once
#ifndef TASK1_H
#define TASK1_H
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

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

	double earthAndRope();

};
#endif // !TASK1_H
