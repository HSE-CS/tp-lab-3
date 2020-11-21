#include<iostream>
#include "Circle.h"


int main() {
	Circle pool;
	pool.setRadius(3.);
	Circle fence;
	fence.setRadius(4.);
	double sum = (fence.getArea() - pool.getArea()) * 1000 + fence.getFerence() * 2000;
	std::cout << sum << " p\n";
	return 0;
}