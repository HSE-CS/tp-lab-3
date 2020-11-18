#pragma once
#ifndef _CIRCLE_H
#define _CIRCLE_H_

class Circle{
private:
	double radius;
	double ference;
	double area;
public:
	void setRadius(double r);
	void setFerence(double f);
	void setArea(double a);
	double getRadius();
	double getFerence();
	double getArea();
};
#endif
