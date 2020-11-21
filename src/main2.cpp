#include<iostream>
//#include "../include/Circle.h"
#include "Circle.h"
//#include "../include/task1.h"

int main() {
	Circle pool;
	pool.setRadius(3.);
	Circle fence;
	fence.setRadius(4.);
	double sum = (fence.getArea() - pool.getArea()) * 1000 + fence.getFerence() * 2000;
	std::cout << sum << " p\n";
	return 0;
}
//0.15915494309228961