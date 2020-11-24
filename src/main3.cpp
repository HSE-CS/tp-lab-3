#include <iostream>
#include "DateTime.h"

using namespace std;

int main() {

    DateTime A(14, 10, 2001);
    cout << A.getToday() << '\n';

    DateTime B(21, 2, 2001);
    cout << B.getToday() << '\n';

    cout << A.getDifference(B) << '\n';

    cout << A.getYesterday() << '\n';
    cout << B.getTomorrow() << '\n';

    cout << A.getPast(A.getDifference(B));

    return 0;
}