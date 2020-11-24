#include "task1.h"
using namespace std;

double calcDelta(){
    Circle earth(6378.1);
    Circle rope{};

    rope.setFerence(earth.getFerence() + 1);

    return rope.getRadius() - earth.getRadius();

}

double calcCost() {
    Circle pool(3);
    Circle roadAroundThePool(pool.getRadius() + 1);

    return 1000 * (roadAroundThePool.getArea() - pool.getArea()) + 2000 * roadAroundThePool.getFerence();
}