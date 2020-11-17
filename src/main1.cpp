#include <iostream>
#include "Circle.h"

int main() {
	Circle earth(6378100.0);
	Circle rope(0.0);
	rope.setFerence(earth.getFerence() + 1);
	std::cout << rope.getRadius() - earth.getRadius();
}