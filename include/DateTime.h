#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H

#include <string>
#include <cstring>

class DateTime {
private:
    struct tm date;
    std::string months[12] = {"january","february","march","april","may","june","july","august","september","october","november","december"};
    std::string weekDays[7] = {"sunday", "monday","tuesday","wednesday","thursday","friday","saturday"};
public:
    DateTime(int day, int month, int year);
    DateTime();
    DateTime(DateTime& dateTime);
    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int N);
    std::string getPast(unsigned int N);
    int getDifference(DateTime&);
};

#endif //TASK1_DATETIME_H
