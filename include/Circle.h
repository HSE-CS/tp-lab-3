#ifndef CIRCLE_H
#define CIRCLE_H
#define _CRT_SECURE_NO_WARNINGS
#include <cmath>;
#include <iostream>;

const double PI = 3.141592653589793;

class Circle
{
private:
	double radius; //радиус
	double ference; //длина окружности
	double area;  //площадь круга
public:
	Circle(double);   // конструктор с параметром числового типа
	Circle();
	void setRadius(double); //при установке значения радиуса пересчитывать длину окружности и площадь;
	void setFerence(double); // при усталновке длины окружности всё пересчитать.
	void setArea(double); //при установке площади пересчитывать радиус и длину окружности.
	double getRadius();
	double getFerence();
	double getArea();
};
#endif

