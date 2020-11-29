#include "DateTime.h"
#include <iostream>

int main() {
    DateTime d2(1, 4, 2000);
    DateTime d;
    DateTime dt(31, 8, 2018);

    std::cout <<d.getToday() <<std::endl;
    std::cout <<d2.getYesterday() <<std::endl;
    std::cout <<dt.getTomorrow() <<std::endl;
    std::cout <<d.getPast(2) << std::endl;
    std::cout <<d2.getDifference(d)<<std::endl;
    return 0;
} 