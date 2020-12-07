#include <iostream>
#include "DateTime.h"

int main() {
    DateTime date(00, 00, 2020);
    std::cout << date.getToday();
    std::cout << date.getFuture(1);
    std::cout << date.getFuture(10);
    return 0;
}