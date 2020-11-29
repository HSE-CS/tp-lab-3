#pragma once
#include<ctime>
#include<string>
using namespace std;
class DateTime
{

private:
	tm date_time;

public:
	DateTime(int d, int m, int y);
	DateTime();
	DateTime( DateTime* dt);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture(unsigned int N);
	string getPast(unsigned int N);
	int getDifference(DateTime&);

};
