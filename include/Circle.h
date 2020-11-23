#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{
private:
	double radius = 0.0;
	double ference = 0.0;
	double area = 0.0;
public:
	Circle(double radius = 0);
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius();
	double getFerence();
	double getArea();
};
#endif