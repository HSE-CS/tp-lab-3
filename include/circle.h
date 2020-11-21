#pragma once

class Circle {
private:
	double radius;
	double ference;
	double area;
	double pi = 3.1415926535;
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