#include "task1.h"
#include "Circle.h"
#include "stdio.h"

double calcDelta(){
    Circle Earth(63781000);

    double r = Earth.getRadius();
    double new_r = Circle::calcRadius(Earth.getFerence() + 1, -1);

    return new_r - r;
}

double calcCost(){
    Circle Pool(3);
    Circle PoolWithRoad(4);

    double road_area = PoolWithRoad.getArea() - Pool.getArea();
    double fence_area = PoolWithRoad.getFerence();

    return road_area * 1000 + fence_area * 2000;
}
