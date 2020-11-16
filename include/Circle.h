#pragma once
#ifndef _CIRCLE_H
#define _CIRCLE_H_

class Circle{
private:
	double radius;
	double ference;
	double area;
public:
	void setRadius();
	void setFerence();
	void setArea();
	double getRadius(double ference, double area, int key);
	double getFerence(double rad);
	double getArea(double rad);
};
#endif
