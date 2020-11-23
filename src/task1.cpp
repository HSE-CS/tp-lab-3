#include "task1.h"
#include "Circle.h"
double getGap(double radius)
{
	Circle circle(radius);
	Circle newCircle(1);
	newCircle.setFerence(circle.getFerence() + 1);
	return newCircle.getRadius() - circle.getRadius();
}
double calcDelta()
{
	return getGap(6378.1);
}
double calcCost()
{

	double poolRad = 3;
	double fenceRad = 4;
	Circle circle(poolRad);
	double area1 = circle.getArea();
	circle.setRadius(fenceRad);
	double area2 = circle.getArea();
	double fer = circle.getFerence();
	double a = 1000;
	double b = 2000;
	double result = (area2 - area1) * a;
	result += fer*b; 
	return result;
}
