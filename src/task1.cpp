#include "task1.h"
#include "Circle.h"

double calcDelta() {
	Circle earth(6378100.0); // meters
	Circle rope;
	rope.setFerence(earth.getFerence() + 1.0);
	return rope.getRadius() - earth.getRadius();
}
