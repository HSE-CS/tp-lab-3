#include <iomanip>
#include <sstream>
#include <algorithm>
#include "DateTime.h"

DateTime::DateTime(int day_, int month_, int year_)     {
    day = day_;
    month = month_;
    year = year_;
}

DateTime::DateTime(const DateTime &datetime)     {
    day = datetime.day;
    month = datetime.month;
    year = datetime.year;
}

DateTime::DateTime()     {
    time_t now = time(nullptr);
    tm *tim = localtime(&now);
    day = tim->tm_mday;
    month = tim->tm_mon+1;
    year = tim->tm_year+1900;
}

std::string datetime_to_string(int day, int month, int year){
    tm in = {0, 0, 0, day, month - 1, year - 1900};
    auto tmp = mktime(&in);
    auto *out = localtime(&tmp);
    char buffer[80];

    strftime(buffer,sizeof(buffer),"%d %B %Y, %A",out);
    std::string str(buffer);
    std::transform(str.begin(), str.end(), str.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    return str;
//    std::ostringstream oss;
//    oss << std::put_time(&out, "%d %m %Y, %A");
//    return oss.str();
}

std::string DateTime::getToday() {
    return datetime_to_string(this->day, this->month, this->year);
}

std::string DateTime::getFuture(unsigned int N) {
    return datetime_to_string(this->day+N, this->month, this->year);
}

std::string DateTime::getPast(unsigned int N) {
    return datetime_to_string(this->day-N, this->month, this->year);
}

std::string DateTime::getYesterday() {
    return datetime_to_string(this->day-1, this->month, this->year);
}

std::string DateTime::getTomorrow() {
    return datetime_to_string(this->day+1, this->month, this->year);
}

int DateTime::getDifference(DateTime &datetime){
    tm me = { 0, 0, 0, this->day, this->month - 1, this->year - 1900 };
    time_t me_date = mktime(&me);

    tm his = { 0, 0, 0, datetime.day, datetime.month - 1, datetime.year - 1900 };
    time_t his_date = mktime(&his);

    return (int) difftime(me_date, his_date) / (60 * 60 * 24);
}
