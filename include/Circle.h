#pragma once
#ifndef TASK1_CIRCLE_H
#define TASK1_CIRCLE_H

using namespace std;

class Circle {
private:
	double radius;
	double ference;
	double area;
public:
	Circle();
	
	Circle(double radius);
	
	void setArea(double ar);
	
	void setFerence(double fer);
	
	void setRadius(double rad);
	
	double getArea();
	
	double getFerence();
	
	double getRadius();
};

#endif //TASK1_CIRCLE_H