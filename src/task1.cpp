#include "task1.h"
#define RAD 6378.1

double calcDelta()
{
	Circle earth {RAD};
	Circle rope {0.0};
	rope.setFerence(earth.getFerence() + 1);
	return rope.getRadius() - earth.getRadius();
}

double calcCost()
{
	Circle pool {3.0};
	Circle road {4.0};
	double cost {0};
	cost += 1000 * (road.getArea() - pool.getArea());
	cost += 2000 * (road.getFerence());
	return cost;
}