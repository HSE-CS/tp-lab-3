#include "task1.h"
#include "Circle.h"

double calcDelta(int piece, double EarthRadius)
{
	Circle Earth, ropeBasedCircle;

	Earth.setRadius(EarthRadius);
	ropeBasedCircle.setFerence(Earth.getFerence() + piece);

	return ropeBasedCircle.getRadius() - Earth.getRadius();
}

double calcCost(double poolRadius, int concretePrice,
		int fencePrice, double roadWidth)
{
	Circle road, pool;

	pool.setRadius(poolRadius);
	road.setRadius(pool.getRadius() + roadWidth);

	return ( ( road.getArea() - pool.getArea() ) * concretePrice) + road.getFerence() * fencePrice;
}
