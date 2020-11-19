#include "task1.h"
#include "Circle.h"

double calcDelta()
{
	Circle Earth(6378.1);
	Circle Rope(0.0);
	Rope.setFerence(Earth.getFerence() + 1);
	return (Rope.getRadius() - Earth.getRadius());
}

double calcCost()
{
	Circle Pool(3.0);
	Circle Pool_with_Fence(3.0 + 1.0);
	return (1000 * (Pool_with_Fence.getArea() - Pool.getArea()) + 2000 * Pool_with_Fence.getFerence());
}
