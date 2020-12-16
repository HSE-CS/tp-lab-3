#include "../include/task1.h"
#include "../include/Circle.h"

double calcDelta(){
    Circle earth(6378.1);
    earth.setFerence(earth.getFerence() + 1);
    return earth.getRadius() - 6378.1;
}

double calcCost(){
    Circle pool(3.0);
    Circle place(4.0);
    return (place.getArea() - pool.getArea()) * 1000 + place.getFerence() * 2000;
}

