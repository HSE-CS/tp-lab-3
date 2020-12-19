#include "task1.h"

double calcDelta() {
    Circle earth(6378100);
    double ference = earth.getFerence();
    double radius = earth.getRadius();
    earth.setFerence(ference + 1);
    return earth.getRadius() - radius;
}

double calcCost() {
    Circle pool(3);
    double area = pool.getArea();
    pool.setRadius(4);
    return (pool.getArea() - area) * 1000 + pool.getFerence() * 2000;
}