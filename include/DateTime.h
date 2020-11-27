#ifndef DATETIME_H
#define DATETIME_H
#include <string>

class DateTime{
private:
    struct tm data;
public:
    DateTime(int d, int m, int y);
    DateTime();
    DateTime(DateTime& stat);
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int N);
    std::string getPast(unsigned int N);
    int getDifference(DateTime& stat);
};

#endif