#include "Circle.h"
#include "task1.h"

double calcDelta() {
	Circle earth(6378100.0);
	Circle rope(0.0);
	rope.setFerence(earth.getFerence() + 1);
	return rope.getRadius() - earth.getRadius();
}

double calcCost() {
	Circle pool(3);
	Circle pool_with_trail(1 + 3);
	return 1000 * (pool_with_trail.getArea() - pool.getArea()) + 2000 * pool_with_trail.getFerence();

}