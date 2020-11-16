//
// Created by Vadim Makarov on 16.11.2020.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Circle.h"


using namespace std;

double calcDelta(Circle &earth, Circle &rope){
    rope.setFerence(earth.getFerence() + 1);
    double gap = rope.getRadius() - earth.getRadius();
    return gap;
}

double calcCost(Circle &pool, Circle &walkway){
    double walkwayCost = (walkway.getArea() - pool.getArea()) * 1000;
    double fenceCost = walkway.getFerence() * 2000;
    return walkwayCost + fenceCost;
}