#include "task1.h"
#include "Circle.h"

double calcDelta() {
    Circle Earth, Rope;
    Earth.setRadius(6381.1);
    Rope.setFerence(Earth.getFerence() + 1);
    return Rope.getRadius() - Earth.getRadius();
}

double calcCost() {
    Circle Pool, Road;
    Pool.setRadius(3);
    Road.setRadius(4);
    return 1000*(Road.getArea() - Pool.getArea()) + 2000*Road.getFerence();
}
