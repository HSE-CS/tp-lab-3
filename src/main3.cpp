#include "DateTime.h"
#include <iostream>

int main() {
    DateTime dt;
    std::cout << "Yesterday was " << dt.getYesterday() << std::endl;
    std::cout << "Today is " << dt.getToday() << std::endl;
    std::cout << "Tommorow would be " << dt.getTomorrow() << std::endl;
    std::cout << "30 days ago was " << dt.getPast(30) << std::endl;
    std::cout << "In 30 days would be " << dt.getFuture(30) << std::endl;

    DateTime dt1(20, 11, 2020);
    DateTime dt2(21, 11, 2020);
    std::cout << "The difference is " << dt1.getDifference(dt2) << " day('s)" << std::endl;
} 