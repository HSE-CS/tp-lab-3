#include<iostream>
#include <math.h>

using namespace std;

class Circle {
public:
	Circle(double valueRad);
	void setRadius(double value);
	void setFerence(double value);
	void setArea(double value);
	double getRadius();
	double getFerence();
	double getArea();

private:
	double radius;//Радиус
	double ference;//Длина
	double area;//площадь
};