#include <iostream>
#include "DateTime.h"
#include "task1.h"

int main() {
    DateTime data1;
    DateTime data2 (22,11,2020);
    std::cout << data1.getToday() << std::endl;
    std::cout << data2.getToday() << std::endl;
    std::cout << data2.getFuture(9) << std::endl;
    std::cout << data1.getDifference(data2) << std::endl;
    return 0;
}
