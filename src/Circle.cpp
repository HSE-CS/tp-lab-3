#include "Circle.h"
#include <iostream>
#include <cstring>
#include <cmath>

//Circle.cpp - реализация методов

//r
//2pir
//pir^2

Circle::Circle(double d)
{
    radius = d;
    setRadius(radius);

}

double sk(double r)
{
    return M_PI*(r*r);
}

double len(double r)
{
    return 2*M_PI*r;
}


void Circle::setRadius(double r)
{
    //- при установке значения радиуса пересчитывать длину окружности и площадь;
    ference = len(r);
    area = sk(r);

}
void Circle::setFerence(double l)
{
    //- при установке длины окружности пересчитывать радиус и площадь;
    ference = l;
    radius = ference / (2*M_PI);
    area = sk(radius);

}
void Circle::setArea(double s)
{
    //- при установке площади пересчитывать радиус и длину окружности.
    area = s;
    radius = sqrt(area/M_PI);
    ference = len(radius);

}
double Circle::getRadius()
{
    return radius;
}
double Circle::getFerence()
{
    return ference;
}
double Circle::getArea()
{
    return area;
}



/*

В класс `Circle` включить конструктор, принимающий значение радиуса.

Класс должен обязательно содержать методы:

- **setRadius()**
- **setFerence()**
- **setArea()**
- **getRadius()**
- **getFerence()**
- **getArea()**

*Замечание*

- при установке значения радиуса пересчитывать длину окружности и площадь;
- при установке длины окружности пересчитывать радиус и площадь;
- при установке площади пересчитывать радиус и длину окружности.

*/
