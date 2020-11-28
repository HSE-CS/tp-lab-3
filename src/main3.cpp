#include "DateTime.h"

int main()
{
    DateTime now;
    DateTime dateOfBirth(1, 4, 2001);
    DateTime copyOfNow(now);

    std::cout << "Today: " << now.GetToday() << std::endl;
    std::cout << "Copy of today: " << copyOfNow.GetToday() << std::endl;
    std::cout << "Date of birth: " << dateOfBirth.GetToday() << std::endl;
    std::cout << "Tomorrow: " << now.GetTomorrow() << std::endl;
    std::cout << "Yesterday: " << now.GetYesterday() << std::endl;
    std::cout << "Past 26 days: " << now.getPast(26) << std::endl;
    std::cout << "Future 7 days: " << now.getFuture(7) << std::endl;
    std::cout << "Difference: " << dateOfBirth.getDifference(now) << std::endl;

    return 0;
}