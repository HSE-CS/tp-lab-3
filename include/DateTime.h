#pragma once
#include <string>
#include <time.h>

using namespace std;

class DateTime {
private:
    time_t rawtime;
    struct tm* timeinfo;

	const char* weekday[7] = { "Sunday", "Monday",
							 "Tuesday", "Wednesday",
							 "Thursday", "Friday", "Saturday" };
    const char* months[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
public:
    time_t secTime;
    DateTime();
	DateTime(int day, int month, int year);
	DateTime(const DateTime& obj);
    struct tm* GetTimeInfo();
    string GetDate();
    string getWeekDay();
    string getToday();
    string getYesterday();
    string getTomorrow();
    string getFuture(unsigned int N);
    string getPast(unsigned int N);
    int getDifference(DateTime&);

};