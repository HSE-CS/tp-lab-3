#include "task1.h"
#include <cmath>

double calcDelta() {
	Circle Earth(6378.1);
	Circle rope(6378.1);
	rope.setFerence(rope.getFerence() + 1.0);
	return (rope.getRadius() - Earth.getRadius());
}

double calcCost() {
	Circle pool(3);
	Circle hedge(4);
	return (hedge.getArea() - pool.getArea()) * 1000 + hedge.getFerence() * 2000;
}
