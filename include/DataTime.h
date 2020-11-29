#pragma once
#ifndef DATATIME_H
#define DATATIME_H
#include <string>
using namespace std;
class DataTime {
private:
	int day, month, year;

public:
	DataTime();
	DataTime(const DataTime& obj);
	DataTime(int day, int month, int year);
	string getToday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	int getDifference(DataTime&);
};

#endif 