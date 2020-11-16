#include "DateTime.h"

    char formatstr[] = "%d %B %Y, %A"; // day, full name of month, year in XXXX, weekday from sunday to saturday


    DateTime::DateTime(unsigned day, unsigned month, unsigned year){
        this->day = day;
        this->month = month;
        this->year = year;

        //need some action
        time_t loctime = time(NULL);
        struct tm *dt = localtime(&loctime);

        dt->tm_mday = this->day;
        dt->tm_mon = this->month - 1;
        dt->tm_year = this->year - 1900;
        dt->tm_hour = 0;
        dt->tm_min = 0;
      //  std::cout<<dt->tm_year<<std::endl;
        mktime(dt);
        //std::cout<<asctime(dt)<<std::endl;

        char ministr[160] = {0};

        strftime(ministr, 30,formatstr, dt);
        
        std::string str(ministr);
        //std::cout<<str<<std::endl;
        //make Upper to lower
        for (size_t i = 0; i<str.size();++i){
            if (str[i]>='A' && str[i]<='Z'){
                str[i] = tolower(str[i]);
            }
        }

        //and now we can set string

        this->dateInStr = str;
    };
    DateTime::DateTime(){
        time_t loctime = time(NULL);
        tm *tm_local = localtime(&loctime);

        this->day = tm_local->tm_mday;
        this->month = tm_local->tm_mon + 1;
        this->year = tm_local->tm_year;
        char ministr[160] = {0};

        //std::cout<<asctime(tm_local);

        strftime(ministr, 30,formatstr, tm_local);
        std::string str(ministr);
        //puts(ministr);
        //std::cout<<str<<std::endl;
        //make Upper to lower
        for (size_t i = 0; i<str.size();++i){
            if (str[i]>='A' && str[i]<='Z'){
                str[i] = tolower(str[i]);
            }
        }
        this->dateInStr = str;
        //std::cout<<this->dateInStr<<std::endl;
    };

    DateTime::DateTime(DateTime &structure){
        this->day = structure.day;
        this->month = structure.month;
        this->year = structure.year;
        this->dateInStr = structure.dateInStr;
    };

    std::string DateTime::getToday(){
        return this->dateInStr;
    };
    // std::string DateTime::getYesterday(){

    // };
    // std::string DateTime::getTomorrow(){

    // };
    // std::string DateTime::getFuture(unsigned int N){

    // };
    // std::string DateTime::getPast(unsigned int N){

    // };
    // unsigned DateTime::getDifference(DateTime& structure){

    // };