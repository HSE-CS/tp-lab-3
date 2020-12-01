/*
 * @author Stanislav Stoianov
 */

#include <iostream>
#include "DateTime.h"

int main() {
    DateTime a;
    DateTime b(14, 1, 2021);
    std::cout << "days to my birthday: " << a.getDifference(b) << std::endl;
    std::cout << "today: " << a.getToday() << std::endl;
    std::cout << "tomorrow: " << a.getTomorrow() << std::endl;
    std::cout << "yesterday: " << a.getYesterday() << std::endl;
    std::cout << "44 days future: " << a.getFuture(44) << std::endl;
    std::cout << "44 days past: " << a.getPast(44) << std::endl;
    return 0;
}