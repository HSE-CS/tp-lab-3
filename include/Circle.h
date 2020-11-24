#pragma once
#ifndef _CIRCLE_H
#define _CIRCLE_H_

#include <iostream>
#include <cmath>
#include <math.h>
#define _USE_MATH_DEFINES 

#define M_PI 3.14159265358979323846

class Circle
{
private:
	double radius, ference, area;
	double findFerence(double r);
	double findArea(double r);
	double findRadiusFromFerence(double l);
	double findRadiusFromArea(double s);
public:
	Circle(double r)
	{
		radius = r;
		ference = findFerence(radius);
		area = findArea(radius);
	}
	void setRadius(double val);
	void setFerence(double val);
	void setArea(double val);
	double getRadius();
	double getFerence();
	double getArea();
};

#endif