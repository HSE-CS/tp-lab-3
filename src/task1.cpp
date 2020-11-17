#include "task1.h"
#include "Circle.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
double calcDelta()
{
	Circle earth_0level{ 6378.1 }; //������� ���� � �������� 6378.1
	Circle earth_1level{ 6378.1 }; //������� ���� � �������� 6378.1
	double new_len = earth_0level.getFerence() + 0.001; //�������������� ����� �����
	earth_1level.setFerence(new_len); //������������� ��� ������� �����
	return (earth_1level.getRadius() - earth_0level.getRadius())*1000; //������� ����� 
}
double calcCost()
{
	Circle pool{ 3 }; //������� ���� � �������� 3 �����
	Circle pool_with_road{ pool.getRadius() + 1 }; //������� ���� � �������� 4 �����
	double result = (pool_with_road.getArea() - pool.getArea()) * 1000 +
		pool_with_road.getFerence() * 2000; //������������ ���������
    return result;
}