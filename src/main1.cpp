#include <iostream>
#include "Circle.h"
#include "task1.h"

int main() {
    Circle c(10.0);
    std::cout << c.getFerence() << std::endl;

    std::cout << calcDelta() << std::endl;
    std::cout << calcCost() << std::endl;
}
