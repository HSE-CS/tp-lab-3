#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
class Circle {
private:
	double radius;
	double ference;
	double area;
	//double pi = 3.1415926535897933;
	double pi = M_PI;
public:
	Circle(double rad) {
		this->radius = rad;
		this->ference = 2 * pi * this->radius;
		this->area = pi * this->radius * this->radius;
	}
	void setRadius(double rad);
	void setFerence(double fer);
	void setArea(double area);
	double getRadius();
	double getFerence();
	double getArea();

};