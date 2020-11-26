#include "task1.h"
#include "Circle.h"

double calcDelta(int piece = 1, double EarthRadius = 6378100.0)
{
	Circle Earth, ropeBasedCircle;

	Earth.setRadius(EarthRadius);
	ropeBasedCircle.setFerence(Earth.getFerence() + piece);

	return ropeBasedCircle.setRadius - Earth.getRadius();
}

double calcCost(double poolRadius = 3.0, int concretePrice = 1000,
		int fencePrice = 2000, double roadWidth = 1.0)
{
	Circle road, pool;

	pool.setRadius(poolRadius);
	road.setRadius(pool.getRadius() + roadWidth);

	return ( ( road.getArea() - pool.getArea() ) * concretePrice) + road.getFerence() * fencePrice;
}
