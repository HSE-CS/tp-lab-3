#include "task1.h"
#include "Circle.h"

double calcDelta() {
	Circle Circle(6378.1);
	Circle.setFerence(Circle.getFerence() + 1);

	return (Circle.getRadius() - 6378.1);
}


double calcCost() {
	Circle Circle((double)3);
	double AreaPool = Circle.getArea();
	Circle.setRadius(Circle.getRadius() + 1);
	double AreaPavment = Circle.getArea() - AreaPool;
	double total_sum= 1000 * AreaPavment + 2000 * Circle.getFerence();
	return total_sum;
}