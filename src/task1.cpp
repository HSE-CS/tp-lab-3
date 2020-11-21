#include "task1.h"

double getDelta(Circle earth, double lenChange)
{
	double rad0 = earth.getRadius();
	earth.setFerence(earth.getFerence() + lenChange);
	return earth.getRadius() - rad0;
}

double getPoolPrice(double poolRad, double walkWayWidth, double walkWayPrice, double fencePrice)
{
	Circle pool(poolRad);
	Circle poolWithWalkway(poolRad + walkWayWidth);
	double walkWayArea = poolWithWalkway.getArea() - pool.getArea();
	double fenceLen = poolWithWalkway.getFerence();
	return walkWayArea*walkWayPrice + fenceLen*fencePrice;
}

double calcDelta()
{
	Circle earth(6378100);
	return getDelta(earth, 1);
}

double calcCost()
{
	return getPoolPrice(3.0, 1.0, 1000.0, 2000.0);
}
