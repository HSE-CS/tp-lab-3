#define _USE_MATH_DEFINES
#include "Circle.h"
#include <iostream>
#include <cmath>

double calcDelta(double a, double b) {
	return abs(a - b);
}

double calcCost(double num, double cost) {
	return (num * cost);
}