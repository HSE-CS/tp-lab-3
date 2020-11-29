#include"task1.h"
#include"Circle.h"


double calcDelta()
{

	Circle circle1(6378.1), circle2(0.0);
	circle2.setFerence((circle1.getFerence() + 1.0));
		double x = circle2.getRadius() - circle1.getRadius();
	return x;


}

double calcCost()
{

	double price_road = 0;
	double price_wall = 0;
	Circle road(4.0);
	Circle pool(3.0);
	Circle wall(4.0);

	road.setArea((road.getArea() - pool.getArea()));
	price_road = road.getArea() * 1000.0;
	price_wall = wall.getFerence() * 2000.0;
	return  price_road + price_wall;




}