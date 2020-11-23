#include "Circle.h"
#include "task1.h"

double calcDelta(){
	Circle planet(6378.1);
    double first_radius = planet.getRadius();
    planet.setFerence(planet.getFerence() + 1);
    return planet.getRadius() - first_radius;
}

double calcCost(){
    Circle pool(3.0);
    Circle track(4.0);
    double track_cost = (track.getArea() - pool.getArea()) * 1000;
    double fencing_cost = track.getFerence() * 2000;
    return track_cost + fencing_cost;
}