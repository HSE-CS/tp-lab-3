#include "DateTime.h"


int main() {

	DateTime time(10, 8, 1981);
	std::cout << time.getToday() << "	today\n";
	std::cout << time.getYesterday() << "	yesterday\n";
	std::cout << time.getTomorrow() << "	tomorrow\n";
	std::cout << time.getFuture(4) << "	future after N=4 days\n";
	std::cout << time.getPast(4) << "	past before N=4 days\n";
	std::cout << "\n";
	DateTime time2(10, 3, 2004);
	std::cout << time2.getDifference(time) << "		difference between 10.08.1981 and 10.3.2004\n";

	DateTime time_new;
	std::cout << time_new.getToday() << "	today\n";
	std::cout << time_new.getYesterday() << "	yesterday\n";
	std::cout << time_new.getTomorrow() << "	tomorrow\n";
	std::cout << time_new.getFuture(4) << "	future after N=4 days\n";
	std::cout << time_new.getPast(4) << "	past before N=4 days\n";
	std::cout << "\n";

	DateTime time_new2(time);
	std::cout << time_new2.getToday() << "	today\n";
	std::cout << time_new2.getYesterday() << "	yesterday\n";
	std::cout << time_new2.getTomorrow() << "	tomorrow\n";
	std::cout << time_new2.getFuture(4) << "	future after N=4 days\n";
	std::cout << time_new2.getPast(4) << "	past before N=4 days\n";
	std::cout << "\n";

	DateTime time_new3(time_new);
	std::cout << time_new3.getToday() << "	today\n";
	std::cout << time_new3.getYesterday() << "	yesterday\n";
	std::cout << time_new3.getTomorrow() << "	tomorrow\n";
	std::cout << time_new3.getFuture(4) << "	future after N=4 days\n";
	std::cout << time_new3.getPast(4) << "	past before N=4 days\n";
	return 0;
}