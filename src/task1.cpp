//
// Created by Алексей Трутнев on 16.11.2020.
//

#include "task1.h"
#include "Circle.h"

double calcDelta(Circle& obj1, Circle& obj2){
    return obj1.getRadius() - obj2.getRadius();
}

double countRoad(Circle& road, Circle& pool, double cost){
    return (road.getArea() - pool.getArea()) * cost;
}

double countFence(Circle& road, double cost) {
    return road.getFerence() * cost;
}

double calcCost(double costRoad, double costFence){
    return costFence + costRoad;
}