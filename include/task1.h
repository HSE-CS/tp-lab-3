//
// Created by Алексей Трутнев on 16.11.2020.
//

#include "Circle.h"

#ifndef LAB3TEST_TASK1_H
#define LAB3TEST_TASK1_H

double calcDelta(Circle& obj1, Circle& obj2);

double calcCost(double costRoad, double costFence);
double countRoad(Circle& temp1, Circle& temp2, double cost);
double countFence(Circle& road, double cost);

#endif //LAB3TEST_TASK1_H
