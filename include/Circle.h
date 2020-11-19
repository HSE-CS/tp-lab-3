#pragma once

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
