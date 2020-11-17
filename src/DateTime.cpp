#include "DateTime.h"

    char formatstr[] = "%d %B %Y, %A"; // day, full name of month, year in XXXX, weekday from sunday to saturday

    DateTime::DateTime(unsigned day, unsigned month, unsigned year){
        this->day = day;
        this->month = month;
        this->year = year - 1900;

        //need some action
        time_t loctime = time(NULL);
        struct tm *dt = localtime(&loctime);

        dt->tm_mday = this->day;
        dt->tm_mon = this->month - 1;
        dt->tm_year = this->year;
        dt->tm_hour = 0;
        dt->tm_min = 0;
      //  std::cout<<dt->tm_year<<std::endl;
        mktime(dt);
        //std::cout<<asctime(dt)<<std::endl;

        char miniStr[160] = {0};

        strftime(miniStr, 30,formatstr, dt);
        
        std::string str(miniStr);
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

    std::string DateTime::getYesterday(){
        if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 4 == 0 && this->year % 400 == 0)){
            //extreme cases
            if (this->month == 3 && this->day == 1){
                this->month--;
                this->day = 29;
            }
            else if (this->day == 1 && this->month == 1){
                this->day = 31;
                this->month = 12;
                this->year--;
            }
            //usual cases
            else {
                if (this->day - 1 > 0){
                this->day--;
                }
                else{
                    this->month--;
                    if (this->month == 0){
                        this->month = 12;
                    }
                    if (this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12){
                        this->day = 31;
                    }
                    else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
                        this->day = 30;
                    }
                }
            }
        }
        else {
            if (this->month == 3 && this->day == 1){
                this->month--;
                this->day = 28;
            }
            else if (this->day == 1 && this->month == 1){
                ////std::cout<< "ya tuta one";
                this->year--;
                this->day = 31;
                this->month = 12;
            }
            //usual cases
            else {
                if (this->day - 1 > 0){
                //std::cout<<"ya tuta\n";
                    this->day--;
                }
                else{
                    this->month--;
                    if (this->month == 0){
                        this->month = 12;
                    }
                    if (this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12){
                        this->day = 31;
                    }
                    else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
                        this->day = 30;
                    }
                }
            }
        } 
        //quite repetitive action
        time_t loctime = time(NULL);
        struct tm *dt = localtime(&loctime);

        dt->tm_mday = this->day;
        dt->tm_mon = this->month - 1;
        dt->tm_year = this->year;
        dt->tm_hour = 0;
        dt->tm_min = 0;
        mktime(dt);
        //std::cout<<asctime(dt)<<std::endl;
        char miniStr[160] = {0};

        strftime(miniStr, 30,formatstr, dt);
        
        std::string str(miniStr);

        //make Upper to lower
        for (size_t i = 0; i<str.size();++i){
            if (str[i]>='A' && str[i]<='Z'){
                str[i] = tolower(str[i]);
            }
        }
        
        this->dateInStr = str;

        return this->dateInStr;

    };
    std::string DateTime::getTomorrow(){
       // std::cout<<this->day<<this->month<<this->year<<std::endl;
        if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 4 == 0 && this->year % 400 == 0)){
            if (this->month == 2 && this->day == 29){
                this->month++;
                this->day = 1;
            }
            else if (this->month == 12 && this->day == 31){
                this->day = 1;
                this->month = 1;
                this->year++;
            }
            else {
                int dayCount = 0;
                switch (this->month){
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        dayCount = 31;
                        break;

                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        dayCount = 30;
                        break;
                    case 2:
                        dayCount = 29;
                        break;
                    }
                if (this->day < dayCount){
                    this->day++;
                }
                else{
                    this->month++;
                    this->day =1;
                }
            }
        }
        else {
            if (this->month == 2 && this->day == 28){
                this->month++;
                this->day = 1;
            }
            else if (this->month == 12 && this->day == 31){
                this->day = 1;
                this->month = 1;
                this->year++;
            }
            else {
                int dayCount = 0;
                switch (this->month){
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        dayCount = 31;
                        break;

                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        dayCount = 30;
                        break;
                    case 2:
                        dayCount = 28;
                        break;
                }
                if (this->day < dayCount){
                    this->day++;
                }
                else{
                    this->month++;
                    this->day = 1;
                }
            }
        } 
        //quite repetitive action
        time_t loctime = time(NULL);
        struct tm *dt = localtime(&loctime);

        dt->tm_mday = this->day;
        dt->tm_mon = this->month - 1;
        dt->tm_year = this->year;
        dt->tm_hour = 0;
        dt->tm_min = 0;
        mktime(dt);
        //std::cout<<asctime(dt)<<std::endl;
        char miniStr[160] = {0};

        strftime(miniStr, 30,formatstr, dt);
        
        std::string str(miniStr);

        //make Upper to lower
        for (size_t i = 0; i<str.size();++i){
            if (str[i]>='A' && str[i]<='Z'){
                str[i] = tolower(str[i]);
            }
        }
        
        this->dateInStr = str;

        return this->dateInStr;

    };
    std::string DateTime::getFuture(unsigned int N){
        if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 4 == 0 && this->year % 400 == 0)){
            if (this->month == 2){
                if ((this->day + N) > 29){
                    this->day += N-29;
                    this->month++;
                }
                else {
                    this->day += N;
                }
            }
            else {
                int dayCount = 0;
                switch (this->month){
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        dayCount = 31;
                        break;

                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        dayCount = 30;
                        break;
                    case 2:
                        dayCount = 29;
                        break;
                }
                if (this->day + N > dayCount){
                    this->day += N-dayCount;
                    this->month++;
                }
                else{
                    this->day += N;
                }
            } 
        }
        else{
            if (this->month == 2){
                if ((this->day + N) > 28){
                    this->day += N-28;
                    this->month++;
                }
                else {
                    this->day += N;
                }
            }
            else {
                int dayCount = 0;
                switch (this->month){
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        dayCount = 31;
                        break;

                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        dayCount = 30;
                        break;
                    case 2:
                        dayCount = 28;
                        break;
                }
                if (this->day + N > dayCount){
                    this->day += N-dayCount;
                    this->month++;
                }
                else{
                    this->day += N;
                }
            } 
        }
        
        //quite repetitive action
        time_t loctime = time(NULL);
        struct tm *dt = localtime(&loctime);

        dt->tm_mday = this->day;
        dt->tm_mon = this->month - 1;
        dt->tm_year = this->year;
        dt->tm_hour = 0;
        dt->tm_min = 0;
        mktime(dt);
        //std::cout<<asctime(dt)<<std::endl;
        char miniStr[160] = {0};

        strftime(miniStr, 30,formatstr, dt);
        
        std::string str(miniStr);

        //make Upper to lower
        for (size_t i = 0; i<str.size();++i){
            if (str[i]>='A' && str[i]<='Z'){
                str[i] = tolower(str[i]);
            }
        }
        
        this->dateInStr = str;

        return this->dateInStr;

    };
    std::string DateTime::getPast(unsigned int N){
        if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 4 == 0 && this->year % 400 == 0)){
            //extreme cases
            if (this->month == 3 && this->day - N < 1){
                this->month--;
                this->day += 29-N;
            }
            else if (this->day - N < 1 && this->month == 1){
                this->day += 31 - N;
                this->month = 12;
                this->year--;
            }
            //usual cases
            else {
                if (this->day - N > 0){
                this->day -= N;
                }
                else{
                    this->month--;
                    if (this->month == 0){
                        this->month = 12;
                    }
                    if (this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12){
                        this->day = 31 - N;
                    }
                    else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
                        this->day = 30 - N;
                    }
                }
            }
        }
        else {
             //extreme cases
            if (this->month == 3 && this->day - N < 1){
                this->month--;
                this->day += 28-N;
            }
            else if (this->day - N < 1 && this->month == 1){
                this->day += 31 - N;
                this->month = 12;
                this->year--;
            }
            //usual cases
            else {
                if (this->day - N > 0){
                this->day -= N;
                }
                else{
                    this->month--;
                    if (this->month == 0){
                        this->month = 12;
                    }
                    if (this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12){
                        this->day = 31 - N;
                    }
                    else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
                        this->day = 30 - N;
                    }
                }
            }
        } 
        //quite repetitive action
        time_t loctime = time(NULL);
        struct tm *dt = localtime(&loctime);

        dt->tm_mday = this->day;
        dt->tm_mon = this->month - 1;
        dt->tm_year = this->year;
        dt->tm_hour = 0;
        dt->tm_min = 0;
        mktime(dt);
        //std::cout<<asctime(dt)<<std::endl;
        char miniStr[160] = {0};

        strftime(miniStr, 30,formatstr, dt);
        
        std::string str(miniStr);

        //make Upper to lower
        for (size_t i = 0; i<str.size();++i){
            if (str[i]>='A' && str[i]<='Z'){
                str[i] = tolower(str[i]);
            }
        }
        
        this->dateInStr = str;

        return this->dateInStr;
    };
    // unsigned DateTime::getDifference(DateTime& structure){

    // };

