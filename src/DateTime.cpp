#include "DateTime.h"

std::string additional_func(int day, int month, int year){
    tm time_in = {0, 0, 0, day, month - 1, year - 1900};
    time_t time_temp = mktime(&time_in);
    tm *time_out = localtime(&time_temp);

    char buffer[SIZE] = {0};
    strftime(buffer, SIZE, "%d %B %Y, %A", time_out);
    std::string rez = buffer;
    for (auto &letter : rez) {
        letter = tolower(letter);
    }
    return rez;
}

DateTime::DateTime(int day, int month, int year) {  //- конструктор с тремя числовыми параметрами (день, месяц,год);
    this->day = day;
    this->month = month;
    this->year = year;
}

DateTime::DateTime() { //- конструктор без параметров (объект использует текущую дату);
    time_t now = time(nullptr);
    tm *ltm = localtime(&now);

    this->day = ltm->tm_mday;
    this->month = ltm->tm_mon + 1;
    this->year = ltm->tm_year + 1970;
}


DateTime::DateTime(const DateTime &new_date) {   //- конструктор копирования (создаём копию другого объекта);
    day = new_date.day;
    month = new_date.month;
    year = new_date.year;
}

std::string DateTime::getToday() const {  // 07 november 2018, wedensday
    return additional_func(day, month,year);
}

std::string DateTime::getYesterday() const {
    return getPast(1);
}

std::string DateTime::getTomorrow() const {
    return getFuture(1);
}

std::string DateTime::getFuture(unsigned int N) const {
    return additional_func(day + N, month,year);
}

std::string DateTime::getPast(unsigned int N) const {
    return additional_func(day - N, month,year);
}

int DateTime::getDifference(DateTime & new_date) {
    int difference = 0;
    struct std::tm old_d = {0, 0, 0, day, month - 1, year - 1900};
    struct std::tm new_d = {0,0,0,new_date.day,new_date.month- 1,new_date.year- 1900};
    std::time_t x = std::mktime(&old_d);
    std::time_t y = std::mktime(&new_d);
    if ( x != (std::time_t)(-1) && y != (std::time_t)(-1) ) {
        difference = (int)std::difftime(y, x) / (60 * 60 * 24);
    }
    return difference;
}


