#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
//#include "../include/DateTime.h"
#include "DateTime.h"

int main()
{
    DateTime today(20, 11, 2020);                   // ������� � ����� ��� ������
    std::cout << today.getToday() << "\n"; 
    std::cout << today.getYesterday() << "\n";      // ����� � ����� �����
    std::cout << today.getTomorrow() << "\n";       // ������ � ���� ������ ������ T_T
    std::cout << today.getFuture(14) << "\n";       // � ����� ��� ����� ����� ��� �����
    std::cout << today.getPast(50) << "\n";         // � ��� � ������ ������� ��������
    DateTime sessia(21, 12, 2020);                  // ����� ������ T_T
    std::cout << sessia.getDifference(today) << "\n";
    return 0;
}