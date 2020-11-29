#include "DateTime.h"

int main() {
	DateTime today;
	DateTime next_new_year(1, 1, 2021);
    std::cout << today.getToday() << std::endl;
    std::cout << today.getYesterday() << std::endl;      
    std::cout << today.getTomorrow() << std::endl;       
    std::cout << today.getFuture(14) << std::endl;       
    std::cout << today.getPast(50) << std::endl;

    DateTime cpy_today(today);
    std::cout << cpy_today.getDifference(next_new_year) << std::endl;

    return 0;
}
