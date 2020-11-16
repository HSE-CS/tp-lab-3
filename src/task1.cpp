#include "Circle.h"
#include "task1.h"
#include <iostream>
#include <cstring>
#include <cmath>

//task1.cpp - определение функций расчета зазора и стоимости бассейна

//Представим, что земля имеет форму идеального шара.
// Вокруг поверхности земного шара туго натянута верёвка (между ней и поверхностью нет никакого зазора).
// Кто-то разрезает верёвку в произвольном месте и добавляет кусок верёвки длиной 1 метр.
// После вставки между поверхностью земли и верёвкой возникает зазор, вызванный увеличением длины.
// Найти величину этого зазора. Примем за радиус земли расстояние в 6378.1 км

//r
//2pir
//pir^2



double calcDelta()
{
    Circle ground(6378.1*1000);
    //ground.setRadius();
    double oldR = ground.getRadius();
    double oldL = ground.getFerence();
    ground.setFerence(oldL+1);
    double nevR = ground.getRadius();
    double del = nevR - oldR;
    return del;
}

//Необходимо рассчитать стоимость материалов для бетонной дорожки вокруг круглого бассейна,
// а также стоимость материалов ограды вокруг бассейна (вместе с дорожкой).
// Стоимость 1 квадратного метра бетонного покрытия 1000 р.
// Стоимость 1 погонного метра ограды 2000 р.
// Радиус бассейна 3 м.
// Ширина бетонной дорожки вокруг бассейна 1 м.

double calcCost()
{
    Circle bas(3);
    //bas.setRadius(3); // old r, l, s
    double nS = sk(bas.getRadius()+1); // new s
    double needed = nS - bas.getArea(); // wid of path
    double coastPath = needed *1000; // $ of path
    double coastFence = bas.getFerence() *2000; // $ of fence

    return coastPath + coastFence; // total
}

/*
## Функции (помещаются в `task1.cpp`):

- **double calcDelta()** - расчет зазора между землей и веревкой
- **double calcCost()** - расчет стоимости бассейна

Заголовки данных функций размещаются в заголовочном файле `task1.h`
*/