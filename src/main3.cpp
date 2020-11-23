#include "DateTime.h"
#include <iostream>

int main()
{
    DateTime dt(31,10,2018);
    std::cout << dt.getToday() << std::endl;
    std::cout << dt.getTomorrow() << std::endl;
}