#include"DateTime.h"

#include<iostream>
using namespace std;

int main() {
	DateTime Now;
	cout << Now.getToday() << "; " << Now.getTomorrow() << "; " << Now.getYesterday() << endl;
	cout << Now.getFuture(10) << "; " << Now.getPast(23) << endl;
	DateTime Date(18, 12, 2020);
	cout << Now.getDifference(Date);

	return 0;
}