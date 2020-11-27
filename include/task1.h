//
// Created by Данил on 24.11.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <iostream>

template<typename T>
void print__(T t) {
    std::cout.precision(16);
    std::cout << t << '\n';
}


double calcDelta();

double calcCost();

#endif //TASK1_TASK1_H
