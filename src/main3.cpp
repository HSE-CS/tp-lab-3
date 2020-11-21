#define _CRT_SECURE_NO_WARNINGS
#include "../include/DateTime.h"
#include <iostream>

using namespace std;

int main()
{
	DateTime td(1, 11, 2020);
	DateTime td1(td);
	cout << "Today: " << td1.getToday() << endl;
	cout << "Yesterday: " << td1.getYesterday() << endl;
	cout << "Today: " << td1.getToday() << endl;
	DateTime td2(5, 11, 2020);
	cout << "Diff = " << td.getDifference(td2) << endl;
	return 0;
}