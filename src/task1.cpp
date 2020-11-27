#include "task1.h"
#include "Circle.h"

double calcDelta(){
    double earth_radius = 6378.1;
    double added = 1;
    Circle earth(earth_radius);
    earth.setFerence(earth.getFerence()+ added);
    return earth.getRadius()-earth_radius;
}

double calcCost(){
    double pool_radius = 3;
    double dorozhka_width = 1;
    double dorozhka_cost = 1000;
    double zabor_cost = 2000;
    Circle pool(pool_radius);
    double dorozhka = pool.getArea();
    pool.setRadius(pool_radius+dorozhka_width);
    dorozhka = pool.getArea()-dorozhka;
    return dorozhka * dorozhka_cost + pool.getFerence() * zabor_cost;
}