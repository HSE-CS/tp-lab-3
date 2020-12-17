#include "Circle.h"
#include "task1.h"
#include <iostream>

using namespace std;


double calcDelta() {
	double radius = 6378.1;
	double inpiece = 0.001;
	Circle Earth(radius);
	double len = Earth.getFerence() + inpiece;
	Earth.setFerence(len);
	return (Earth.getRadius() - radius) * 1000;
}

double calcCost() {
	double radiuspool = 3.0;
	double widthroad = 1.0;
	double costroad = 1000.0;
	double costfence = 2000.0;
	Circle Pool(radiuspool);
	Circle Poolandroad(radiuspool + widthroad);
	double CostOnRoad = (Poolandroad.getArea() - Pool.getArea()) * costroad;
	double CostOnFence = Poolandroad.getFerence() * costfence;
	return CostOnFence + CostOnRoad;
}