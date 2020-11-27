//
// Created by arkly on 25.11.2020.
//

#include "DateTime.h"

int main() {

    DateTime my_time1(27, 11, 2018);
    DateTime my_time2(my_time1);

    std::cout << my_time1.getPast(10) << std::endl;
    std::cout << my_time1.getDifference(my_time2) << std::endl;
    std::cout << my_time1.getToday() << std::endl;
    std::cout << my_time2.getTomorrow() << std::endl;
    std::cout << my_time2.getYesterday() << std::endl;
    std::cout << my_time1.getFuture(20) << std::endl;


    return 0;
}