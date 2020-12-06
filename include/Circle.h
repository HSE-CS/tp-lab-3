#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cmath>
#include <math.h>
#define _USE_MATH_DEFINES

#define M_PI 3.14159265358979323846

class Circle
{
private:
	double radius;
	double ference;
	double area;
	double ference_from_radius(double r);
	double area_from_radius(double r);
	double radius_from_ference(double f);
	double radius_from_area(double a);
public:
	Circle(double r) {
		radius = r;
		ference = ference_from_radius(radius);
		area = area_from_radius(radius);
	}
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius();
	double getFerence();
	double getArea();
};
#endif