#include "task1.h"
#include "Circle.h"

double calcDelta() {
	Circle earth(6378.1); // kilometers
	Circle rope;
	rope.setFerence(earth.getFerence() + 1.0);
	return rope.getRadius() - earth.getRadius();
}

double calcCost() {
	Circle pool(3.0);
	Circle road(4.0);
	return ((road.getArea() - pool.getArea()) * 1000.0) + (road.getFerence() * 2000.0);
}
