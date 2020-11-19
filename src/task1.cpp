#include "task1.h"
#include "Circle.h"
#include <cmath>


double calcDelta(double rope_delta, double earth_radius)
{
	Circle Earth(earth_radius);
	double new_rope_lenght = Earth.getFerence() + 1.0;
	Earth.setFerence(new_rope_lenght);
	return fabs(Earth.getRadius() - earth_radius);
}

double calcCost(double cover_cost, double fence_cost, double pool_radius, double trail_width)
{
	Circle pool(pool_radius);
	Circle pool_with_trail(pool_radius + trail_width);
	return (pool_with_trail.getArea() - pool.getArea()) * cover_cost + pool_with_trail.getFerence()*fence_cost;
}
