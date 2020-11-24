#include "Circle.h"

double calcDelta(){
    const double EARTH_RADIUS = 6378.1;
    Circle earth(EARTH_RADIUS);
    earth.setFerence(earth.getFerence()+1.0);
    return earth.getRadius()-EARTH_RADIUS;
}

double calcCost(){
    const double POOL_RADIUS = 3.0;
    Circle pool(POOL_RADIUS);
    double pool_area = pool.getArea();
    pool.setRadius(POOL_RADIUS+1.0);
    return (pool.getArea()-pool_area)*1000.0 + pool.getFerence()*2000.0;
}