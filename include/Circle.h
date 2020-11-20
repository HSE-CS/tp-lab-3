#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>
#define M_PI 3.14159265358979323846

class Circle
{
private:
	double radius;
	double ference;
	double area;
public:
	explicit Circle(double r);
	void setRadius(double r);
	void setFerence(double f);
	void setArea(double a);
	double getRadius() const;
	double getFerence() const;
	double getArea() const;
};

#endif
