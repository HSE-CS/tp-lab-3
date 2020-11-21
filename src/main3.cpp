#include "DateTime.h"
#include <iostream>

int main() {
    DateTime dt;
    std::cout << "today is " << dt.getToday() << std::endl;
    std::cout << "yesterday was " << dt.getYesterday() << std::endl;
    std::cout << "tommorow will be " << dt.getTomorrow() << std::endl;
    std::cout << "30 days ago was " << dt.getPast(30) << std::endl;
    std::cout << "in 30 days will be " << dt.getFuture(30) << std::endl;

    DateTime dt1(20, 11, 2020);
    DateTime dt2(21, 11, 2020);
    std::cout << "difference is " << dt1.getDifference(dt2) << " day" << std::endl;
}