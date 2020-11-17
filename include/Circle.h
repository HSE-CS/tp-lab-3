#ifndef _CIRCLE_H
#define _CIRCLE_H_

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <algorithm>

class Circle
{
private:
	double radius;
	double ference;
	double area;
	
public:
	Circle(double rad);
	void setRadius(double input);
	void setFerence(double input);
	void setArea(double input);
	double getRadius();
	double getFerence();
	double getArea();
};
#endif
