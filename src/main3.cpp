#include "DateTime.h"
#include "time.h"
#include <iostream>

using namespace std;

int main()
{
	DateTime today, otherDay(31, 12, 2020);

	cout << today.getToday() << endl;
	cout << otherDay.getToday() << endl;
	cout << today.getYesterday() << endl;
	cout << today.getTomorrow() << endl;
	cout << otherDay.getTomorrow() << endl;
	cout << today.getFuture(20) << endl;
	cout << today.getPast(30) << endl;
	cout << today.getDifference(otherDay) << endl;

	DateTime day1(20, 11, 2018), day2(21, 11, 2018);

	cout << day1.getDifference(day2) << endl;

	DateTime day3(20, 11, 2018), day4(20, 11, 2018);

	cout << day3.getDifference(day4) << endl;

	return 0;
}