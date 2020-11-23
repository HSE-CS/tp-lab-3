#include "task1.h"
#include "Circle.h"

double calcDelta(){
    Circle earth(6378.1), rope(0);
    rope.setFerence(earth.getFerence()+1);
    return rope.getRadius() - earth.getRadius();
}

double calcCost(){
    Circle pool(3), road(4);
    double fence_length = road.getFerence();
    double road_area = road.getArea() - pool.getArea();

    return fence_length*2000 + road_area * 1000;
}