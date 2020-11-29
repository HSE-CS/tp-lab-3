#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

using namespace std;

class Circle {
private:
	double radius;
	double ference;
	double area;
public:
	Circle();
	Circle(double radius);
	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);
	const double getRadius() const;
	const double getFerence() const;
	const double  getArea() const;

};


#endif