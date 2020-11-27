#include "Circle.h"
#include "task1.h"
#include <iostream>

int main() {
    Circle pool(10);
    Circle pool_with_road(12);
    double necessary_area = pool_with_road.getArea() - pool.getArea();
    std::cout << necessary_area * 1000 + pool_with_road.getFerence() * 2000 << '\n';
    return 0;
}