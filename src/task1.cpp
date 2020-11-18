#include "task1.h"
#include "Circle.h"

double calcDelta(){
    double r1 = 6378100;
    Circle c1(r1);
    c1.setFerence((c1.getFerence()+1));
    return c1.getRadius()-r1;
}

double calcCost(){
    int r = 3;
    Circle b(r+0.5);
    double cost = 1000*b.getFerence();
    b.setRadius(r+1);
    cost += 2000*b.getFerence();
    return cost;
}

