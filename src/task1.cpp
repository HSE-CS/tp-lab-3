#include "task1.h"
#include "Circle.h"



double calcDelta(){
    double planetRadius = {6378100.0};
    double ropeLenght = {1.0}; 

    Circle planet (planetRadius);


    double ferenceNew = planet.getFerence() + ropeLenght;

    planet.setFerence(ferenceNew);
    //std::cout<<planet.getFerence();

    double newRadius = planet.getRadius();

    return fabs(planetRadius - newRadius); 
}


double calcCost(){
    double poolRadius = {3.0};
    double poolWithPathRadius = poolRadius + 1.0;
    double costOfOneMeterOfConcrete = 1000.0;
    double costOfOneMeterOfFence = 2000.0;

    Circle pool(poolRadius);
    double poolArea = pool.getArea();
    
    pool.setRadius(poolWithPathRadius);

    double pathArea = fabs(pool.getArea() - poolArea);
    double fenceLenght = pool.getFerence();

    double result = fenceLenght*costOfOneMeterOfFence + pathArea*costOfOneMeterOfConcrete;

    return result;
}


