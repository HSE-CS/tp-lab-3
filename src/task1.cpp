#include "../include/Circle.h"
#include "../include/task1.h"

double calcDelta() {
    Circle earth(6378.1);
    double old_radius = earth.getRadius();
    double old_ference = earth.getFerence();
    earth.setFerence(old_ference + 1);
    double new_radius = earth.getRadius();
    return new_radius - old_radius;
}

double calcCost() {
    Circle pool(3);
    Circle pool_with_road(4);
    double necessary_area = pool_with_road.getArea() - pool.getArea();
    return necessary_area * 1000 + pool_with_road.getFerence() * 2000;
}

