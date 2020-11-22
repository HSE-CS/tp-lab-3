#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Circle.h"
#include "task1.h"
#include "DateTime.h"
#include <ctime>


int main()
{
	cout << "DateTime1(20, 10, 2010):" << endl;
	DateTime datetime1(20, 10, 2010);
	cout << datetime1.getToday() << endl;
	cout << datetime1.getTomorrow() << endl;
	cout << datetime1.getYesterday() << endl;
	cout << datetime1.getFuture(2) << endl;
	cout << datetime1.getPast(2) << endl;
	cout << "DateTime1(10, 10, 2010):" << endl;
	DateTime datetime2(10, 10, 2010);
	cout << datetime2.getToday() << endl;
	cout << datetime2.getTomorrow() << endl;
	cout << datetime2.getYesterday() << endl;
	cout << datetime2.getFuture(2) << endl;
	cout << datetime2.getPast(2) << endl;
	cout << "DateTime3(datetime1):" << endl;
	DateTime datetime3(datetime1);
	cout << datetime3.getToday() << endl;
	cout << datetime3.getTomorrow() << endl;
	cout << datetime3.getYesterday() << endl;
	cout << datetime3.getFuture(2) << endl;
	cout << datetime3.getPast(2) << endl;
	cout << "Difference between datetime1 and datetime2:" << endl;
	cout << datetime1.getDifference(datetime2) << endl;

	return 0;
}