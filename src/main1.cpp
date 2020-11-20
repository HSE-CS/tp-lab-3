#include<iostream>
//#include "../include/Circle.h"
#include "Circle.h"

int main() {
	Circle Earth(6378.1 * 1000);
	//Earth.setRadius(6378.1 * 1000);
	Circle new_Earth;
	new_Earth.setFerence(Earth.getFerence() + 1);
	std::cout << new_Earth.getRadius() - Earth.getRadius() << " m";
  return 0;
}