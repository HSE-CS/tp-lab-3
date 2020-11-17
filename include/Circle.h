#pragma once

class Circle {
private:
	double radius, ference, area;
public:
	Circle();
	Circle(double radius);
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius();
	double getFerence();
	double getArea();
};
