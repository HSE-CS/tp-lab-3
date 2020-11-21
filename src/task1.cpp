#include "task1.h"
#include "Circle.h"

double calcDelta() { //- расчет зазора между землей и веревкой
    const double addition = 1.0;
    Circle NewSize(earth_radius);

    NewSize.setFerence(NewSize.getFerence() + addition);

    return NewSize.getRadius() - earth_radius;
}

double calcCost() { //- расчет стоимости бассейна
    double road_price = 0.0;
    double fence_road_price = 0.0;
    double price1_concrete = 1000.0;
    double price1_fence = 2000.0;

    Circle Pool(3.0);
    Circle ConcreteWalkway(1.0);

    road_price = (ConcreteWalkway.getArea()-Pool.getArea()) * price1_concrete;
    fence_road_price = road_price + (ConcreteWalkway.getFerence() * price1_fence);
    return fence_road_price;
}