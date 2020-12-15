//DateTime.h - описание класса `DateTime`

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>


#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H
class DateTime
{
private:

    struct tm data;

public:

    //конструктор с тремя числовыми параметрами (день, месяц,год);
    DateTime(int day, int month, int year)
    {
        data.tm_sec = 0;
        data.tm_min = 0;
        data.tm_hour = 0;
        data.tm_mday = day;
        data.tm_mon = month - 1;
        data.tm_year = year - 1900;

        mktime(&data);
    }

    //конструктор без параметров (объект использует текущую дату);
    DateTime()
    {
        //time_t current = nullptr;
        time_t current;
        time(&current);

        data = *localtime(&current);
    }

    //конструктор копирования (создаём копию другого объекта);
    DateTime(const DateTime& tmp)
    {
        this->data = tmp.data;
    }

    //`getToday()` - возвращение текущей даты в виде строки, с указанием дня недели и названия месяца (например `07 november 2018, wedensday`);
    std::string getToday();

    //`getYesterday()` - возвращение даты вчерашнего дня в виде строки.
    std::string getYesterday();

    //`getTomorrow()` - возвращение даты завтрашнего дня в виде строки.
    std::string getTomorrow();

    //`getFuture(unsigned int N)` - возвращение даты через N дней в будущем;
    std::string getFuture(unsigned int N);

    //`getPast(unsigned int N)` - возвращение даты через N дней в прошлом;
    std::string getPast(unsigned int N);

    //`getDifference(DateTime&)` - для расчёта разницы (в днях) между двумя датами
    int getDifference(DateTime&);

};

#endif //TASK1_DATETIME_H
