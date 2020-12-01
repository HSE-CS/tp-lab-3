#include <iostream>
#include "DateTime.h"

int main() {
    DateTime date(20, 05, 2001);
    std::cout << date.getToday();
    return 0;
}
