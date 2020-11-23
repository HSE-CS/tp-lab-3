#include "DateTime.h"
#include <iostream>

int main()
{
    DateTime dt(1,1,2018);
    std::cout << dt.getTomorrow() << std::endl;
    std::cout << dt.getDifference(dt) << std::endl;
}