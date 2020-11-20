#ifndef TASK1_DATETIME_H
#define TASK1_DATETIME_H
#include <string>
#include <ctime>
#define SIZE 100

//struct tm, time, localtime, mktime;

class DateTime {
private:
    struct tm data_info;
public:
    //- конструктор с тремя числовыми параметрами (день, месяц,год);
    //- конструктор без параметров (объект использует текущую дату);
    //- конструктор копирования (создаём копию другого объекта);
    DateTime() {
        time_t now = time(nullptr);
        data_info = *localtime(&now);

        mktime(&data_info);
    }

    DateTime(int day, int month, int year) {
        data_info.tm_year = year - 1900;
        data_info.tm_mon = month - 1;
        data_info.tm_mday = day;
        data_info.tm_hour = 0;
        data_info.tm_min = 0;
        data_info.tm_sec = 0;

        mktime(&data_info);
    }

    DateTime(DateTime& new_date) {
        data_info = new_date.data_info;
    }

    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int N);
    std::string getPast(unsigned int N);
    int getDifference(DateTime&);

//- `getToday()` - возвращение текущей даты в виде строки, с указанием дня недели и названия месяца (например `07 november 2018, wedensday`);
//- `getYesterday()` - возвращение даты вчерашнего дня в виде строки.
//- `getTomorrow()` - возвращение даты завтрашнего дня в виде строки.
//- `getFuture(unsigned int N)` - возвращение даты через N дней в будущем;
//- `getPast(unsigned int N)` - возвращение даты через N дней в прошлом;
//- `getDifference(DateTime&)` - для расчёта разницы (в днях) между двумя датами
};
#endif //TASK1_DATETIME_H
