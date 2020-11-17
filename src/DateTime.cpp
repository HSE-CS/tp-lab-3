/*
 * @author Stanislav Stoianov
 */

#include "../include/DateTime.h"

DateTime::DateTime() {

}

DateTime::DateTime(DateTime &datetime) {

}

std::string DateTime::getToday() {
    return std::string();
}

std::string DateTime::getYesterday() {
    return std::string();
}

std::string DateTime::getTomorrow() {
    return std::string();
}

DateTime DateTime::getFuture(unsigned int N) {
    return DateTime();
}

DateTime DateTime::getPast(unsigned int N) {
    return DateTime();
}

DateTime DateTime::getDifference(DateTime &) {
    return DateTime();
}


