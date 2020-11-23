#include "DateTime.h"
#include <iostream>

int main()
{
    DateTime dt;
    std::cout << dt.getToday() << std::endl;
    std::cout << dt.getTomorrow() << std::endl;
}