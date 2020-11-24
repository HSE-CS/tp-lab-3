#include <iostream>
#include "Circle.h"
#include "task1.h"


//"Бассейн"
//
//Необходимо рассчитать стоимость материалов для бетонной дорожки вокруг круглого бассейна,
// а также стоимость материалов ограды вокруг бассейна (вместе с дорожкой).
// Стоимость 1 квадратного метра бетонного покрытия 1000 р. Стоимость 1 погонного метра ограды 2000 р.
// Радиус бассейна 3 м. Ширина бетонной дорожки вокруг бассейна 1 м.

int main() {
    double costConcrete = 1000;  // rub per metre^2
    double costFence = 2000;     // rub per metre
    double radiusPool = 3;      // meter
    double widthRoad = 1;       // meter

    Circle pool(radiusPool);
    Circle road(radiusPool + widthRoad);

    double payRoad = countRoad(road, pool, costConcrete);
    double payFence = countFence(road, costFence);

    std::cout << payRoad << std::endl;
//     std::cout << calcCost(payRoad, payFence) << std::endl;
    return 0;
}
