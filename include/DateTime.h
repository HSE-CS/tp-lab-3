/*
 * @author Stanislav Stoianov
 */

#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <string>

class DateTime {
private:

public:

    DateTime();

    DateTime(DateTime &datetime);

    std::string getToday();

    std::string getYesterday();

    std::string getTomorrow();

    DateTime getFuture(unsigned int N);

    DateTime getPast(unsigned int N);

    DateTime getDifference(DateTime &);
};

#endif
