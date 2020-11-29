#include "task1.h"

#include "Circle.h"

double calcDelta()
{
	const double initialRadius = 6378100.0;
	Circle rope(initialRadius);
	rope.setFerence(rope.getFerence() + 1.0);
	return rope.getRadius() - initialRadius;
}

double calcCost()
{
	Circle pool(3);
	Circle fence(4);
	return 1000 * (fence.getArea() - pool.getArea()) + 2000 * fence.getFerence();
}
