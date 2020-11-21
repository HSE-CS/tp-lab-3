#include<iostream>
#include "Circle.h"

int main() {
	Circle Earth(6378.1 * 1000);
	Circle new_Earth;
	new_Earth.setFerence(Earth.getFerence() + 1);
	std::cout << new_Earth.getRadius() - Earth.getRadius() << " m";
	return 0;
}