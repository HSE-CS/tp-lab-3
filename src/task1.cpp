//
// Created by arkly on 25.11.2020.
//

#include "task1.h"
#include "Circle.h"
double calcDelta() {
    //Task 1
    Circle* Earth = new Circle;
    Circle* rope = new Circle;

    Earth->setRadius(6378.1);
    rope->setFerence(Earth->getFerence() + 0.001);
    double breach = rope->getRadius() - Earth->getRadius();

    delete Earth;
    delete rope;

    return breach;
}
double calcCost() {
    //Task 2
    Circle* pool = new Circle;
    Circle* pool_road = new Circle;

    pool->setRadius(3);
    pool_road->setRadius(pool->getRadius() + 1);
    double tor_square = pool_road->getArea() - pool->getArea();
    double cost_road{tor_square * 1000};
    double cost_wall{pool_road->getFerence() * 2000};

    delete pool;
    delete pool_road;

    return cost_road + cost_wall;
}
