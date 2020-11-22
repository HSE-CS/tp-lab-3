#ifndef CIRCLE_H
#define CIRCLE_H
#define _CRT_SECURE_NO_WARNINGS
#include <cmath>;
#include <iostream>;

const double PI = 3.141592653589793;

class Circle
{
private:
	double radius; //������
	double ference; //����� ����������
	double area;  //������� �����
public:
	Circle(double);   // ����������� � ���������� ��������� ����
	Circle();
	void setRadius(double); //��� ��������� �������� ������� ������������� ����� ���������� � �������;
	void setFerence(double); // ��� ���������� ����� ���������� �� �����������.
	void setArea(double); //��� ��������� ������� ������������� ������ � ����� ����������.
	double getRadius();
	double getFerence();
	double getArea();
};
#endif

