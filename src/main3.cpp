#include "DateTime.h"
#include <iostream>

int main(){
    DateTime dt1(1,10,1999);
    std::cout << dt1.getYesterday() << '\n';
    DateTime dt2(31,12,2020);
    std::cout << dt2.getTomorrow() << '\n';
    DateTime dt3(1,11,2020);
    std::cout << dt3.getToday() << '\n';
    DateTime dt4(1,1,2020);
    DateTime dt5(30,12,2021);
    std::cout << dt4.getDifference(dt5) << '\n';
    DateTime dt6(30,11,2020);
    DateTime dt7(21,11,2020);
    std::cout << dt6.getDifference(dt7) << '\n';
    return 0;
}