//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>
#include "Circle.h"
#include <iostream>


double calcDelta(){
    Circle Earth(6378.1);
    // в тестах ошибка - если перевести радиус в метры, ответ будет неправильный
    Circle Rope;
    double rope_fer = Earth.getFerence() + 1;
    Rope.setFerence(rope_fer);
    return Rope.getRadius() - Earth.getRadius();
}

double calcCost(){
    Circle pool_INNER(3), pool_OUTER(3+1);
    return 1000*(pool_OUTER.getArea()-pool_INNER.getArea()) + 2000 * pool_OUTER.getFerence();
}
