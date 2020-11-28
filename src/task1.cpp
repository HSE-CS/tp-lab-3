#include "../include/Circle.h"
#include "../include/task1.h"

double calcDelta () {
    const int earthRadius = 6378.1 * 1000;
    Circle earth = Circle(earthRadius);
    Circle rope = Circle();
    rope.setFerence(earth.getFerence() + 1);
    return rope.getRadius() - earth.getRadius();

}

double calcCost () {
    Circle pool = Circle(3);
    Circle poolNRoad = Circle(3 + 1);
    double roadCost = (poolNRoad.getArea() - pool.getArea()) * 1000;
    double fenceCost = poolNRoad.getFerence() * 2000;
    return roadCost + fenceCost<<;
}