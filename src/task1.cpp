#include "Circle.h"


double calcDelta(){
    Circle earth, rope;
    earth.setFerence(6378100);
    rope.setFerence(earth.getFerence() + 1);
    return rope.getRadius() - earth.getRadius();
}

double calcCost(){
    Circle pool, lane, fence;
    pool.setRadius(3);
    double fence_radius = pool.getRadius() + 1;
    lane.setRadius(fence_radius);
    fence.setRadius(fence_radius);
    return 1000 * (lane.getArea() - pool.getArea()) + 2000 * fence.getFerence();
}
