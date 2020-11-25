#include <DateTime.h>

DateTime::DateTime(int day, int month, int year) {
    memset(&date, 0, sizeof(date));
    this->date.tm_mday = day;
    this->date.tm_mon = month - 1;
    this->date.tm_year = year - 1900;
    mktime(&date);
}

DateTime::DateTime() {
    time_t rawtime;
    time(&rawtime);
    this->date = *localtime(&rawtime);

}

DateTime::DateTime(DateTime &dateTime) {
    this->date = dateTime.date;
}

std::string DateTime::getToday() {
    std::string day = (this->date.tm_mday < 10) ? "0" + std::to_string(this->date.tm_mday) : std::to_string(
            this->date.tm_mday);
    std::string result = day + " " + this->months[this->date.tm_mon] + " " +
                         std::to_string(this->date.tm_year + 1900) + ", " + this->weekDays[this->date.tm_wday];
    return result;
}

std::string DateTime::getYesterday() {
    tm newtm = this->date;
    newtm.tm_mday -= 1;
    mktime(&newtm);
    std::string day = (newtm.tm_mday < 10) ? "0" + std::to_string(newtm.tm_mday) : std::to_string(
            newtm.tm_mday);
    std::string result = day + " " + this->months[newtm.tm_mon] + " " +
                         std::to_string(newtm.tm_year + 1900) + ", " + this->weekDays[newtm.tm_wday];
    return result;
}

std::string DateTime::getTomorrow() {
    tm newtm = this->date;
    newtm.tm_mday += 1;
    mktime(&newtm);
    std::string day = (newtm.tm_mday < 10) ? "0" + std::to_string(newtm.tm_mday) : std::to_string(
            newtm.tm_mday);
    std::string result = day + " " + this->months[newtm.tm_mon] + " " +
                         std::to_string(newtm.tm_year + 1900) + ", " + this->weekDays[newtm.tm_wday];
    return result;
}

std::string DateTime::getFuture(unsigned int N) {
    tm newtm = this->date;
    newtm.tm_mday += N;
    mktime(&newtm);
    std::string day = (newtm.tm_mday < 10) ? "0" + std::to_string(newtm.tm_mday) : std::to_string(
            newtm.tm_mday);
    std::string result = day + " " + this->months[newtm.tm_mon] + " " +
                         std::to_string(newtm.tm_year + 1900) + ", " + this->weekDays[newtm.tm_wday];
    return result;
}

std::string DateTime::getPast(unsigned int N) {
    tm newtm = this->date;
    newtm.tm_mday -= N;
    mktime(&newtm);
    std::string day = (newtm.tm_mday < 10) ? "0" + std::to_string(newtm.tm_mday) : std::to_string(
            newtm.tm_mday);
    std::string result = day + " " + this->months[newtm.tm_mon] + " " +
                         std::to_string(newtm.tm_year + 1900) + ", " + this->weekDays[newtm.tm_wday];
    return result;
}

int DateTime::getDifference(DateTime &dateTime) {
    return abs(difftime(mktime(&this->date), mktime(&dateTime.date))) / 86400;
}