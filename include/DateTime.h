#include <ctime>
#include <string>

class DateTime{

public:
    DateTime();

    DateTime(unsigned day, unsigned month, unsigned year);

    DateTime(DateTime const & object);

    std::string getToday();
    std::string getYesterday();
    std::string getTomorrow();
    std::string getFuture(unsigned int);
    std::string getPast(unsigned int);
    unsigned getDifference(DateTime&);

private:
    tm dateTime;
    static std::string getDateTimeString(tm);
};