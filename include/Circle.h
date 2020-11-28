#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <math.h>
using namespace std;

class Circle {
private:
	double radius;
	double ference;
	double area;
public:
	Circle(double radius = 0);
	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);
	double getRadius() const;
	double getFerence() const;
	double  getArea() const;
};

#endif