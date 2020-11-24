#include "Circle.h"
#include "task1.h"
#include <cmath>


double calcDelta()
{
	Circle earth(6378.1);
	Circle rope(earth.getRadius());
	rope.setFerence(earth.getFerence() + 1);
	return fabs(earth.getRadius() - rope.getRadius());
}

double calcCost()
{
	Circle pool(3), fence(4);
	return (fence.getArea() - pool.getArea()) * 1000 + fence.getFerence() * 2000;
}