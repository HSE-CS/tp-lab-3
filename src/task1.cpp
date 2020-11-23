#include "task1.h"
#include "Circle.h"
double getGap(double radius)
{
	Circle circle(radius);
	Circle newCircle(1);
	newCircle.setFerence(circle.getFerence() + 1);
	return newCircle.getRadius() - circle.getRadius();
}
double calcDelta()
{
	return getGap(6378.1);
}
double getTrackCost()
{
	Circle pool(3);

	double trackCost = pool.getArea()*1000;
	return trackCost;
}

double getCostOfTheFence()
{
	Circle pool(3);
	Circle poolWithTrack(4);
	double fenceCost = (poolWithTrack.getFerence() - pool.getFerence())*2000;
	return fenceCost;
}
double calcCost()
{
	return getTrackCost() + getCostOfTheFence();
}
