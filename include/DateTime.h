#pragma once
#include <string>
#include <ctime>
using namespace std;

class DateTime
{
public:

	DateTime(int, int, int);
	DateTime();
	DateTime(const DateTime&);
	string getToday() const;
	string getYesterday() const;
	string getTomorrow() const;
	string getFuture(unsigned int) const;
	string getPast(unsigned int) const;
	int getDifference(DateTime&);

private:
	tm date;
};