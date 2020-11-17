#include "task1.h"
#include "Circle.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
double calcDelta()
{
	Circle earth_0level{ 6378.1 }; //создаем круг с радиусом 6378.1 км 
	Circle earth_1level;
	double new_len = earth_0level.getFerence() + 1; //инициализируем новую длину
	earth_1level.setFerence(new_len); //устанавливаем для второго круге
	double result = earth_1level.getRadius() - earth_0level.getRadius(); //находим зазор 
	return result; 
}
double calcCost()
{
	Circle pool{ 3 }; //создаем круг с радиусом 3 метра
	Circle pool_with_road{ pool.getRadius() + 1 }; //создаем круг с радиусом 4 метра
	double result = (pool_with_road.getArea() - pool.getArea()) * 1000 +
		pool_with_road.getFerence() * 2000; //рассчитываем стоимость
    return result;
}