#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
class Circle {
private:
	double radius;
	double ference;
	double area;
	//double M_PI = 3.1415926535897933;
	//double M_PI = M_PI;
public:
	Circle(double rad) {
		this->radius = rad;
		this->ference = 2 * M_PI * this->radius;
		this->area = M_PI * this->radius * this->radius;
	}
	void setRadius(double rad);
	void setFerence(double fer);
	void setArea(double area);
	double getRadius();
	double getFerence();
	double getArea();

};