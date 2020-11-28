#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cmath>
#define _PI 3.14159265358979323846

class Circle
{
private:
	double radius;
	double ference;
	double area;
public:
	Circle(double radius_);
	void setRadius(double radius_);
	void setFerence(double ference_);
	void setArea(double area_);
	double getRadius();
	double getFerence();
	double getArea();
};

#endif // CIRCLE_H