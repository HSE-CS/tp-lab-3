#include"task1.h"
#include"Circle.h"


double calcDelta()
{

	Circle c1(6378.1), c2(0);
	double l = c1.getFerence();
	c2.setFerence((l + 0.001));
	return ((c2.getRadius() - c1.getRadius())) * 1000.0;


}

double calcCost()
{

	double st_dorosh = 0;
	double st_zabora = 0;
	Circle dorosh((3+1)), bas(3), zabor(4);
	dorosh.setArea((dorosh.getArea() - bas.getArea()));
	st_dorosh = dorosh.getArea() * 1000.0;
	st_zabora = 2000.0 * zabor.getFerence();
	return st_dorosh + st_zabora;




}