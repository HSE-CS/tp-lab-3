#include "task1.h"
#include "Circle.h"

double calcDelta()
{
	Circle a = Circle(6378.1);
	Circle b = Circle(1);
	b.setFerence(a.getFerence() + 1);
	return b.getRadius() - a.getRadius();
}

double calcCost()
{
	Circle pool(3);
	Circle road(4);
	double Sroad = road.getArea() - pool.getArea();
	double fence = road.getFerence();
	return fence * 2000 + Sroad * 1000;
}
