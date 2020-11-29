#include"DateTime.h"

#include<iostream>
using namespace std;

int main() {
	DateTime Now;
	cout << Now.getToday() << '\n';
  // cout << Now.getTomorrow() << '\n';
  cout << Now.getYesterday() << '\n';
	// cout << Now.getFuture(10) << '\n';
  // cout << Now.getPast(23) << '\n';
	// DateTime Date(18, 12, 2020);
	// cout << Now.getDifference(Date) << '\n';

}
