//
// Created by Vadim Makarov on 16.11.2020.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include "Circle.h"


using namespace std;

int main(){
    Circle pool(3);
    Circle walkway(pool.getRadius() + 1);

    double price = (walkway.getArea() - pool.getArea()) * 1000 + (walkway.getRadius() * 2000);

    cout << "price: " << price << " rubles";
}