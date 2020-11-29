#include <iostream>
#include <cstring>
#include "../include/DateTime.h"
// using namespace std;

int main() {
    DateTime d2 = DateTime(2, 12, 2020);
    DateTime d = DateTime();
    std::cout <<d.getToday() <<std::endl;
    std::cout <<d2.getYesterday() <<std::endl;
    std::cout <<d.getPast(2) << std::endl;
    std::cout <<d.getDifference(d2)<<std::endl;
    return 0;
}