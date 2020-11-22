#include "task1.h"
#include "Circle.h"

double calcDelta() {
	Circle Earth(6378.1);
	Circle loop;
	loop.setFerence(Earth.getFerence() + 0.001);
	return loop.getRadius - Earth.getRadius;
}
double calcCost() {
	Circle pool(3.0);
	Circle poolBet(pool.getRadius + 1.0);
	return pool.getFerence * 2000 + (poolBet.getArea - pool.getArea) * 1000;
}
