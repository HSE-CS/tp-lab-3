#include <ctime>
#include <string>
#include <iostream>

class DateTime {
    private:
        struct tm time_struct;
        const char * weekday[7] = { "sunday", "monday",
                             "tuesday", "wednesday",
                             "thursday", "friday", "saturday"};

        const char * month[12] = { "january", "february",
                             "march", "april",
                             "may", "june", "july", "august", "september", "october", "november", "december"};
    public:
        DateTime () {
            time_t rawtime;
            time ( &rawtime );
            time_struct = { 0, 0, 0, 0, 0, 0};
            const std::tm * time_out = std::localtime(&rawtime);
            time_struct.tm_mon = time_out->tm_mon;
            time_struct.tm_year = time_out->tm_year;
            time_struct.tm_wday = time_out->tm_wday;
            time_struct.tm_mday = time_out->tm_mday;
        }

        DateTime (int dayNumber_inp, int monthNumber_inp, int yearNumber_inp) {
            time_struct = { 0, 0, 0, dayNumber_inp, monthNumber_inp - 1, yearNumber_inp - 1900 };
            std::time_t time_temp = std::mktime(&time_struct);
            const std::tm * time_out = std::localtime(&time_temp);
            time_struct.tm_mon = time_out->tm_mon;
            time_struct.tm_year = time_out->tm_year;
            time_struct.tm_wday = time_out->tm_wday;
            time_struct.tm_mday = time_out->tm_mday;
        }
        
        std::string getToday();
        std::string getYesterday();
        std::string getTomorrow();
        std::string getFuture(unsigned int N);
        std::string getPast(unsigned int N);
        int getDifference(DateTime&);
};