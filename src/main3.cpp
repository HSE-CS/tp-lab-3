#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
//#include "../include/DateTime.h"
#include "DateTime.h"

int main()
{
    DateTime today(20, 11, 2020);                   // сегодн€ € делаю эту работу
    std::cout << today.getToday() << "\n"; 
    std::cout << today.getYesterday() << "\n";      // вчера € далал матан
    std::cout << today.getTomorrow() << "\n";       // завтра € буду делать доклад T_T
    std::cout << today.getFuture(14) << "\n";       // а новый год будет через это врем€
    std::cout << today.getPast(50) << "\n";         // а это € просто функцию провер€ю
    DateTime sessia(21, 12, 2020);                  // скоро сесси€ T_T
    std::cout << sessia.getDifference(today) << "\n";
    return 0;
}