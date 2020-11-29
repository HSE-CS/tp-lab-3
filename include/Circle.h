#pragma once


class Circle
{
private:
	double r = 0.0;
	double f = 0.0;
	double a = 0.0;
public:
	Circle(double x);
	void setRadius( double x);
	void setFerence( double x);
	void setArea( double x);
	double getRadius();
	double getFerence();
	double getArea();
};
