#include <iostream>
#include "DateTime.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	DateTime time1(28, 1, 1999);
	DateTime time2(28, 12, 2020);
	cout << "������� ����� 28.01.1999 � 28.12.2020 " << time2.getDifference(time1) <<  endl;
	cout << endl;
	DateTime time_new;
	cout << "������� " << time_new.getToday() <<  endl;
	cout << "����� ���� " << time_new.getYesterday() <<  endl;
	cout << "������ ����� " << time_new.getTomorrow() << endl;
	cout <<  "����� 30 ���� ����� " << time_new.getFuture(30) << endl;
	cout << "15 ���� ����� ���� " << time_new.getPast(15) << endl;
	cout << endl;

	return 0;
}