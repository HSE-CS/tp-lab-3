#ifndef DATETIME_H
#define DATETIME_H

#include<ctime>
#include <string>
using namespace std;


class DateTime
{
private:
 struct tm  savetime;
public:
  DateTime();
  DateTime(size_t,size_t,size_t);
  DateTime(const DateTime&);
  time_t _getmktime() const;
string  getToday() const;
string  getYesterday() const;
string  getTomorrow() const;
string  getFuture(unsigned int ) const;
string  getPast(unsigned int ) const;
int getDifference(DateTime&) const;
};
#endif
