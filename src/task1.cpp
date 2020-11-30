#include <iostream>
#include "Circle.h"
#include "task1.h"

using namespace std;

double calcDelta(){

	double r = 6378.1;

	Circle neww(r);
	neww.setFerence(neww.getFerence() + 1.0);
	return neww.getRadius() - r;

}

double calcCost() {
	Circle pool(3.0);
	Circle path(pool.getRadius()+1);
	double res = (path.getArea() - pool.getArea()) * 1000.0 + path.getFerence() * 2000.0;

	return res;
}