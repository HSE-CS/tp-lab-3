//
// Created by Алексей Трутнев on 16.11.2020.
//

#include "task1.h"
#include "Circle.h"

//double calcDelta(Circle& obj1, Circle& obj2) {
//    return (obj1.getRadius() - obj2.getRadius()); // if km / 1000
//}
//
//double countRoad(Circle& road, Circle& pool, double cost) {
//    return (road.getArea() - pool.getArea()) * cost;
//}

double calcDelta() {
    Circle Earth;
    Earth.setRadius(6378.1 * 1000);
    Circle new_Earth;
    new_Earth.setFerence(Earth.getFerence() + 1);
    return double(new_Earth.getRadius() - Earth.getRadius());
}

double calcCost() {
    Circle pool;
    pool.setRadius(3.);
    Circle fence;
    fence.setRadius(4.);
    return (fence.getArea() - pool.getArea()) * 1000 + fence.getFerence() * 2000;
}

double countFence(Circle& road, double cost) {
    return road.getFerence() * cost;
}

double calcCost(double costRoad, double costFence) {
    return costFence + costRoad;
}
