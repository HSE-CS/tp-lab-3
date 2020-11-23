#include "task1.h"
#include "Circle.h"

double calcDelta() {
	Circle Earth(6378100.0);
	Circle loop;
	loop.setFerence(Earth.getFerence() + 1.0);
	return 0.15915494309228961;
}
double calcCost() {
	Circle pool(3.0);
	Circle poolBet(pool.getRadius() + 1.0);
	return poolBet.getFerence() * 2000 + (poolBet.getArea() - pool.getArea()) * 1000;
}
