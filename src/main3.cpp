#include "DateTime.h"
#include <iostream>


int main() {
    DateTime dt(22, 11, 2020);
    std::cout << "Today: " << dt.getToday() << std::endl;
    std::cout << "Tomorrow: " << dt.getTomorrow() << std::endl;
    std::cout << "Yesterday: " << dt.getYesterday() << std::endl;

    int n_days = 5;
    std::cout << "5 days ago: " << dt.getPast(n_days) << std::endl;
    std::cout << "5 days will: " << dt.getFuture(n_days) << std::endl;

    DateTime dt1(17, 11, 2020);
    DateTime dt2(22, 11, 2020);
    std::cout << "Difference: " << dt1.getDifference(dt2) << " day" << std::endl;

    return 0;
}