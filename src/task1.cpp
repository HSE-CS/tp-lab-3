#include "task1.h"

double calcDelta()
{
	Circle earth(6378100);
	Circle rope;
	rope.setFerence(earth.getFerence() + 1);

	return rope.getRadius() - earth.getRadius();
}

double calcCost()
{
	Circle pool(3);
	Circle road(pool.getRadius() + 1);
	double cost = road.getFerence() * 2000;
	cost += (road.getArea() - pool.getArea()) * 1000;


	return cost;
}
