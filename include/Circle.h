#ifndef CIRCLE_H
#define CIRCLE_H

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class Circle 
{
private:
	double radius;
	double ference;
	double area;
public: 
	Circle(double radius);
	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);
	const double getRadius();
	const double getFerence();
	const double getArea();
};

#endif