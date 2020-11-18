#include "DateTime.h"

const char* months[] = {"january", "february", "march", "april", "may", "june", "july",
                        "august", "september", "october", "november", "december" };

const char* wdays[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

DateTime::DateTime()
{
    this->raw_time = time(nullptr);
}

DateTime::DateTime(const DateTime& data)
{
    this->raw_time = data.raw_time;
}

DateTime::DateTime(uint16_t day, uint16_t month, uint32_t year)
{

    time_t raw_time = time(nullptr);
    struct tm* struct_time = localtime(&raw_time);

    struct_time->tm_mday = day;
    struct_time->tm_mon = month - 1;
    struct_time->tm_year = year - 1900;

    this->raw_time = mktime(struct_time);
}

std::string DateTime::getToday()
{
    std::string str_time;
    struct tm* struct_time = localtime(&this->raw_time);

    if (struct_time->tm_mday > 9)
        str_time.append(std::to_string(struct_time->tm_mday));
    else
    {
        str_time.push_back('0');
        str_time.push_back((char)(struct_time->tm_mday + 48));
    }
    str_time.push_back(' ');

    str_time.append(months[struct_time->tm_mon]);
    str_time.push_back(' ');

    str_time.append(std::to_string(struct_time->tm_year + 1900));
    str_time.push_back(',');
    str_time.push_back(' ');

    str_time.append(wdays[struct_time->tm_wday]);

    return str_time;
}

std::string DateTime::getYesterday()
{
    DateTime tmp(*this);
    tmp.raw_time -= 24 * 60 * 60;
    return tmp.getToday();
}

std::string DateTime::getTomorrow()
{
    DateTime tmp(*this);
    tmp.raw_time += 24 * 60 * 60;
    return tmp.getToday();
}

std::string DateTime::getPast(uint32_t days)
{
    DateTime tmp(*this);
    tmp.raw_time -= 24 * 60 * 60 * (long long)days;
    return tmp.getToday();
}

std::string DateTime::getFuture(uint32_t days)
{
    DateTime tmp(*this);
    tmp.raw_time += 24 * 60 * 60 * (long long)days;
    return tmp.getToday();
}

uint32_t DateTime::getDifference(DateTime& data)
{
    return (abs(this->raw_time - data.raw_time) / (24 * 60 * 60));
}