/*
 * @author Stanislav Stoianov
 */

#include <Circle.h>
#include <iostream>

/*
 * Бассейн. Решить с помощью класса `Circle` следующую задачу:
 *
 * Необходимо рассчитать стоимость материалов для бетонной дорожки вокруг круглого бассейна,
 * а также стоимость материалов ограды вокруг бассейна (вместе с дорожкой).
 * Стоимость 1 квадратного метра бетонного покрытия 1000 р. Стоимость 1 погонного метра ограды 2000 р.
 * Радиус бассейна 3 м. Ширина бетонной дорожки вокруг бассейна 1 м.
 */

int main() {
    const int costConcrete = 1000;
    const int costFence = 2000;
    Circle pool(3);
    Circle path(4);
    std::cout << costFence * path.getFerence() + costConcrete * (path.getArea() - pool.getArea());
    return 0;
}

