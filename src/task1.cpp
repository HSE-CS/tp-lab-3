#include "task1.h"
#include "Circle.h"

double calcDelta()
{
	Circle Earth(6378.1);
	double Rope = 1;
	double Ference = Earth.getFerence() + Rope;
	Earth.setFerence(Ference);
	return Earth.getRadius() - 6378.1;
}

double calcCost()
{
	double Coverage=0,Fence = 0;
	Circle Pool(3);
	Circle Pool_with_fence(4);
	Coverage = 1000 * (Pool_with_fence.getArea() - Pool.getArea());
	Fence= 2000 * Pool_with_fence.getFerence();
	return Coverage+ Fence;
}