#include "task1.h"
#include "Ñircle.h"

double calcDelta()
{
	const double RADIUS_EARTH = 6378.1;

	Circle earth = Circle(RADIUS_EARTH);

	earth.setFerence(earth.getFerence() + 1.0);

	return earth.getRadius() - RADIUS_EARTH;

}

double calcCost()
{
	const double RADIUS_POOL = 3;
	const double DELTA = 1;
	
	Circle pool(RADIUS_POOL);
	Circle pool_with_road(RADIUS_POOL + DELTA);
	
	return 1000 * (pool_with_road.getArea() - pool.getArea()) + 2000 * pool_with_road.getFerence();
}
