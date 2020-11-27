#include "task1.h"
#include "Circle.h"

double calcDelta() {
    Circle Earth(0), Rope(0);
    Earth.setRadius(6381.1);
    Rope.setFerence(Earth.getFerence() + 1);
    return Rope.getRadius() - Earth.getRadius();
}

double calcCost() {
    Circle Pool(0), Road(0);
    Pool.setRadius(3);
    Road.setRadius(4);
    return 1000*(Road.getArea() - Pool.getArea()) + 2000*Road.getFerence();
}
