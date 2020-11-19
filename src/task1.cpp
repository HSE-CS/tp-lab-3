#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

double calcDelta() {
	const double r_earth = 6378.1;
	Circle Earth(r_earth);

	Circle verevka;

	verevka.setFerence(Earth.getFerence() + 1);

	double ans = verevka.getRadius() - Earth.getRadius();
	return ans;
}

double calcCost() {
	
	Circle waterpool(3);
	double r_road = waterpool.getRadius() + 1;
	Circle road(r_road);
	
	double cost_1 = (road.getArea() - waterpool.getArea()) * 1000;
	double cost_2 = road.getFerence() * 2000;
	
	return cost_1 + cost_2;


}