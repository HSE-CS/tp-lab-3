#ifndef CIRCLE_H
#define CIRCLE_H

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

class Circle
{
private:
	double radius;
	double ference;
	double area;
public:
	Circle(double);
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius();
	double getFerence();
	double getArea();
};

#endif