#ifndef TASK1_H
#define TASK1_H
#include "Circle.h"

double calcDelta(int piece = 1, double EarthRadius = 6378100.0);
double calcCost(double poolRadius = 3.0, int concretePrice = 1000,
		int fencePrice = 2000, double roadWidth = 1.0);

#endif
