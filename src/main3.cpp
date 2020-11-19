#include <iostream>
#include "DateTime.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	DateTime time1(28, 1, 1999);
	DateTime time2(28, 12, 2020);
	cout << "Разница между 28.01.1999 и 28.12.2020 " << time2.getDifference(time1) <<  endl;
	cout << endl;
	DateTime time_new;
	cout << "Сегодня " << time_new.getToday() <<  endl;
	cout << "Вчера было " << time_new.getYesterday() <<  endl;
	cout << "Завтра будет " << time_new.getTomorrow() << endl;
	cout <<  "Через 30 дней будет " << time_new.getFuture(30) << endl;
	cout << "15 дней назад было " << time_new.getPast(15) << endl;
	cout << endl;

	return 0;
}