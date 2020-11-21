#ifndef DATETIME_H_INCLUDED
#define DATETIME_H_INCLUDED

#include <ctime>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

class DateTime
{
private:
    unsigned int day = 0;
    unsigned int month = 0;
    unsigned int year = 0;
    std::time_t seconds = 0;

    static const unsigned int SECPERDAY = 24 * 60 * 60;
    static const unsigned int STARTYEAR = 1900;

    static const std::vector<std::string> WEEKDAYS;

    static const std::vector<std::string> MONTHS;
    // if n > 0 returns day in future, else - in Past
    std::string getDayByDifference(int n);

    std::string getDayOfWeek();

    /*
    get name of day in format: (day(XX) month year(XXXX), day of week)
    (e. g. 07 november 2018, wednesday)
     */
    std::string getFullNameOfDay();

public:
    DateTime(unsigned int, unsigned int, unsigned int);
    DateTime();
    DateTime(DateTime &);
    DateTime(std::time_t);
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int n);
    std::string getPast(unsigned int n);
    unsigned int getDifference(DateTime&);
    const std::time_t getSeconds() const;
};

#endif // DATETIME_H_INCLUDED
