#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <cstdint>
#include <ctime>
#include <string>

class DateTime
{
private:
    time_t raw_time;

public:
    DateTime();
    DateTime(const DateTime&);
    DateTime(uint16_t day, uint16_t month, uint32_t year);
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getPast(uint32_t);
    std::string getFuture(uint32_t);
    uint32_t getDifference(DateTime&);
};

#endif //TASK1_DATETIME_H
