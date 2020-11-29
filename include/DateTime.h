#ifndef DATETIME_H
#define DATETIME_H

#include <string>
#include <ctime>
#include <cstring>

class DateTime
{
private:

    time_t time_input;

public:

    DateTime(unsigned day, unsigned month, unsigned year);
    DateTime();
    DateTime(DateTime&);
    
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int N);
    std::string getPast(unsigned int N);
    int getDifference(DateTime&);


};

#endif 