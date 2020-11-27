#include "task1.h"
#include "Circle.h"

double calcDelta() {
    Circle Earth(6381.1), Rope(0);
    Rope.setFerence(Earth.getFerence() + 0.001);
    return Rope.getRadius() - 6381.1;
}

double calcCost() {
    Circle Pool(3), Road(4);
    return 1000*(Road.getArea() - Pool.getArea()) + 2000*Road.getFerence();
}
