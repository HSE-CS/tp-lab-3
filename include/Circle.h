#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
	double radius;
	double ference;
	double area;
public:
	Circle();
	Circle(double);
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius();
	double getFerence();
	double getArea();
};

#endif