#ifndef LAB_3_CIRCLE_H
#define LAB_3_CIRCLE_H
#include<iostream>
#include <math.h>

using namespace std;

class Circle {
public:
	Circle(double valueRad);
	Circle() {
		radius = 0;
		ference = 0;
		area = 0;
	}
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
#endif //LAB_3_CIRCLE_H