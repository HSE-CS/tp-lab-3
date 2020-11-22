#include <string>
#include <ctime>
using namespace std;

class DateTime {

private:
    time_t dateAtime;
public:
    string getToday();

    string getYesterday();

    string getTomorrow();

    string getPast(unsigned int);

    string getFuture(unsigned int);

    unsigned int getDifference(DateTime &);

    DateTime(int day, int month, int year) {
        dateAtime = time(nullptr);
        struct tm *struct_time = localtime(&dateAtime);

        struct_time->tm_mday = day;
        struct_time->tm_mon = month - 1;
        struct_time->tm_year = year - 1900;
        dateAtime = mktime(struct_time);
    }

    DateTime() {
        dateAtime = time(nullptr);
    }

    DateTime(DateTime &oldDate) {
        dateAtime = oldDate.dateAtime;
    }
};
