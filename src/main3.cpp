//
// Created by Valera on 27.11.2020.
//

#include <iostream>
#include <cstring>
#include "DateTime.h"
// using namespace std;

int main() {
    DateTime d2 = DateTime(2, 12, 2020);
    DateTime d = DateTime();
    DateTime dt(31,10,2018);

    std::cout <<d.getToday() <<std::endl;
    std::cout <<d2.getYesterday() <<std::endl;
    std::cout <<dt.getTomorrow() <<std::endl;
    std::cout <<d2.getDifference(d)<<std::endl;
    return 0;
}