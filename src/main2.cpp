//
// Created by Vadim Makarov on 16.11.2020.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Circle.h"
#include "task1.h"


using namespace std;

int main(){
    Circle pool(3);
    Circle walkway(pool.getRadius() + 1);

    std::cout << std::setprecision(17);

    cout << "price: " << calcCost(pool, walkway) << " rubles";
}