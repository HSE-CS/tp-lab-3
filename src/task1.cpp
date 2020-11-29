#include "task1.h"
#include "Circle.h"

double calcDelta() {
	Circle earth(6378100);
	Circle rope;

	rope.setFerence(earth.getFerence() + 1);

	return rope.getRadius() - earth.getRadius();

	double R = 6378.1 * 1000;
	Circle krug(R);
	krug.setFerence(krug.getFerence() + 1);
	return krug.getRadius() - R;
}
double calcCost() {
	Circle pool(3);
	Circle road(pool.getRadius() + 1);

	return 1000 * (road.getArea() - pool.getArea()) + 2000 * road.getFerence();
}