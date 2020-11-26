#include "task1.h"
#include "Circle.h"
#include "stdio.h"

double calcDelta(){
    double r = 6378.1;
    Circle Earth(r);

    Earth.setFerence((Earth.getFerence() + 1));

    return Earth.getRadius() - r;
}

double calcCost(){
    Circle Pool(3);
    Circle PoolWithRoad(4);

    double road_area = PoolWithRoad.getArea() - Pool.getArea();
    double fence_area = PoolWithRoad.getFerence();

    return road_area * 1000 + fence_area * 2000;
}
