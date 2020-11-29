#include "task1.h"

#include "Circle.h"

double calcDelta()
{
	constexpr double initialRadius = 6378.1;
	Circle rope(initialRadius);
	rope.setFerence(rope.getFerence() + 1 / 1000.0);
	return rope.getRadius() * 1000.0 - initialRadius * 1000.0;
}

double calcCost()
{
	Circle pool(3);
	Circle fence(4);
	return 1000 * (fence.getArea() - pool.getArea()) + 2000 * fence.getFerence();
}
