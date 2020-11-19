#ifndef _CIRCLE_H_
#define _CURCLE_H_

class Circle
{
private:
	double radius = 0.0;
	double ference = 0.0;
	double area = 0.0;
public:
	Circle(double);
	void setRadius(double);
	void setFerence(double);
	void setArea(double);
	double getRadius();
	double getFerence();
	double getArea();
};

#endif
