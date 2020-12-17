#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	double radius;
	double ference;
	double area;
public:
	Circle(double Radius1);
	void setRadius(double Radius1);
	void setFerence(double Ference1);
	void setArea(double Area1);
	double getRadius();
	double getFerence();
	double getArea();
};
#endif