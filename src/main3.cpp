#include "datetime.h"
#include <iostream>

int main() {
    DateTime today(22, 10, 2020);
    DateTime today2(today);
    DateTime day(2, 11, 2020);
    std::cout << today.getYesterday() << '\n';
    std::cout << today.getPast(20) << '\n';
    std::cout << today.getFuture(20) << '\n';
    std::cout << today.getTomorrow() << '\n';
    std::cout << today.getDifference(day) << '\n';
}