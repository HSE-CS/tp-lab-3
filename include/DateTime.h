/*
 * @author Stanislav Stoianov
 */

#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <string>

class DateTime {
private:

    time_t raw_time;

public:

    DateTime();

    DateTime(unsigned int day, unsigned int month, unsigned int year);

    DateTime(DateTime &datetime);

    std::string getToday();

    std::string getYesterday();

    std::string getTomorrow();

    std::string getFuture(unsigned int days);

    std::string getPast(unsigned int days);

    unsigned int getDifference(DateTime &) const;

};

#endif