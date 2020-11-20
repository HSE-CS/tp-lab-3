#ifndef DATETIME_H
#define DATETIME_H

using namespace std;

class DateTime {
public:
	DateTime();
	DateTime(int, int, int);
	DateTime(const DateTime&);
	string getToday();
	string getYesterday() const;
	string getTomorrow();
	string getFuture(unsigned int);
	string getPast(unsigned int) const;
	int getDifference(DateTime&);
private:
	tm datetime = tm{ 0, 0 , 0, 0, 0, 0 };
};
string strDatetime(tm*);
#endif
