#include<iostream>
#include<string>
#include"DayTime.h"
using namespace std;

int main() {
	DateTime date;
	cout << date.getToday() << '\n';
	cout << date.getPast(7) << '\n';

	return 0;
}