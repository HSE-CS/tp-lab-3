#ifndef TEST_DATETIME_H
#define TEST_DATETIME_H
#include <string>
#include <ctime>

using namespace std;
class DateTime{
private:
    int year = 0;
    int month = 0;
    int day = 0;
public:
    DateTime(int year, int month, int day);
    DateTime();
    DateTime(const DateTime &date);
    string getToday() const;
    string getYesterday() const;
    string getTomorrow() const;
    string getFuture(unsigned int N) const;
    string getPast(unsigned int N) const;
    int getDifference(DateTime &date);
};

#endif //TEST_DATETIME_H

