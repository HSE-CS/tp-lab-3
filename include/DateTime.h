#ifndef LAB_3_DATETIME_H
#define LAB_3_DATETIME_H
#include <iostream>
#include <string>
#include <ctime>
#define SIZE 100


class DateTime {
public:
    DateTime(int day, int month, int year); //- конструктор с тремя числовыми параметрами (день, месяц,год);

    DateTime(); //- конструктор без параметров (объект использует текущую дату);

    DateTime(const DateTime& new_date); //- конструктор копирования (создаём копию другого объекта);

    std::string getToday() const; //- возвращение текущей даты в виде строки, с указанием дня недели и названия месяца (например 07 november 2018, wedensday);

    std::string getYesterday() const; // - возвращение даты вчерашнего дня в виде строки.

    std::string getTomorrow() const; //- возвращение даты завтрашнего дня в виде строки.

    std::string getFuture(unsigned int N) const; //- возвращение даты через N дней в будущем;

    std::string getPast(unsigned int N) const; //- возвращение даты через N дней в прошлом;

    int getDifference(DateTime& new_date); //- для расчёта разницы (в днях) между двумя датами

private:
    int day = 0;
    int month = 0;
    int year = 0;
};


#endif //LAB_3_DATETIME_H
