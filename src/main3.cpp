#include "DateTime.h"
#include <iostream>

using namespace std;

int main() {
	DateTime time;
	cout << time.getToday() << endl;
	cout << time.getYesterday() << endl;
	cout << time.getTomorrow() << endl;
	cout << time.getFuture(7) << endl;
	cout << time.getPast(7) << endl;

	DateTime new_time(20, 11, 2020);
	cout << time.getDifference(new_time) << endl;
	return 0;
}