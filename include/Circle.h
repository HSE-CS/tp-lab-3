#pragma once


class Circle
{

private:
	double radius = 0;
	double ference = 0;
	double area = 0;

public:

	Circle(double r);

	void setRadius( double r);
	void setFerence( double f);
	void setArea( double a);
	double getRadius();
	double getFerence();
	double getArea();



};
