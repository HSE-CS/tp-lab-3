#pragma once

class Circle
{
public:

	Circle(double);
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius() const;
	double getFerence() const;
	double getArea() const;

private:
	double radius;
	double ference;
	double area;
};