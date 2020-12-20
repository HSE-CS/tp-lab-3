#include "DateTime.h"
#include <iostream>

using namespace std;

int main()
{
	DateTime date1(10, 12, 2012);
	DateTime date2{ 12,11,2012 };
	DateTime date3{};

	cout << date1.getToday() << endl;
	cout << date2.getToday() << endl;
	cout << date3.getToday() << endl;
	cout << "The difference between date1 and date2: " << date1.getDifference(date2) << endl;
	cout << "date1.getTomorrow():" << date1.getTomorrow() << endl;
	cout << "date1.getYesterday():" << date1.getYesterday() << endl;
	cout << "date2.getPast(365):" << date2.getPast(365) << endl;
	cout << "date2.getFuture(365):" << date2.getFuture(365) << endl;
	date3 = date1;
	cout << "date3=date1:" << date3.getToday() << endl;
	return 0;
}