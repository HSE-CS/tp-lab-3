#include "task1.h"
#include "Circle.h"


double calcDelta() {
	Circle Earth;
	Earth.setRadius(6378.1 * 1000);
	Circle new_Earth;
	new_Earth.setFerence(Earth.getFerence() + 1);
	return new_Earth.getRadius() - Earth.getRadius();
}
double calcCost() {
	Circle pool;
	pool.setRadius(3.);
	Circle fence;
	fence.setRadius(4.);
	return (fence.getArea() - pool.getArea()) * 1000 + fence.getFerence() * 2000;
}