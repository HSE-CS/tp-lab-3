#pragma once
#include <string>
#include <time.h>

class DateTime{
private:
    struct tm *date;
public:
    DateTime();
    DateTime(DateTime& other);
    DateTime(uint8_t day, uint8_t month, uint32_t year);
    std::string getToday();
    std::string getYesterday();
    std::string getTommorow(); 
    std::string getFuture(uint32_t n);
    std::string getPast(uint32_t n);
    uint32_t getDifference(DateTime& other);
};