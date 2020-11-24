#include "task1.h"
#define EARTH_RAD 6378.1
#define METRE 1.0
#define ROAD_PRICE 1000.0
#define FENCE_PRICE 2000.0

double calcDelta(){
    Circle circle(EARTH_RAD);
    circle.setFerence(circle.getFerence() + METRE);
    double result = circle.getRadius() - EARTH_RAD;
    return result;
}

double calcCost(){
    double price = 0.0;
    Circle pool(3.0);
    Circle road(4.0);
    price += ROAD_PRICE * (road.getArea() - pool.getArea());
    price += FENCE_PRICE * road.getFerence();
    return price;
}

