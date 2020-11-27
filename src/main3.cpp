#include "DateTime.h"

int main() {
    DateTime today;
    today.DateTime::~DateTime();
    std::cout << today.getToday() << std::endl;
    std::cout << today.getYesterday() << std::endl;
    std::cout << today.getTomorrow() << std::endl;
    std::cout << today.getFuture(5) << std::endl;
    std::cout << today.getPast(30) << std::endl;
    DateTime dt1(20,11,2018);
    DateTime dt2(21,11,2018);
    std::cout << dt1.getDifference(dt2);
}
