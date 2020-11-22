#include "task1.h"
#include "Circle.h"

double calcDelta() {
	Circle earth = Circle(6378.1);
	earth.setFerence(earth.getFerence() + 1.0);
	return earth.getRadius() - 6378.1;
}

double calcCost() {
	Circle pool = Circle(3);
	Circle poolPlusWalkWay = Circle(4);
	double concreteWalkwayArea = poolPlusWalkWay.getArea() - pool.getArea();
	return concreteWalkwayArea * 1000.0 + poolPlusWalkWay.getFerence() * 2000.0;
}