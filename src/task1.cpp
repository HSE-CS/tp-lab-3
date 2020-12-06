#include "../include/task1.h"
#include "../include/Circle.h"

double calcDelta(){
    Circle earth;
    earth.setRadius(6378.1);
    earth.setFerence(earth.getFerence() + 1);
    return earth.getRadius() - 6378.1;
}

double calcCost(){
    Circle pool;
    pool.setRadius(3.0);
    Circle place;
    place.setRadius(4.0);
    return (place.getArea() - pool.getArea()) * 1000 + place.getFerence() * 2000;
}

