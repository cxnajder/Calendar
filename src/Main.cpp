#include <iostream>
#include "DateUtilities.h"
#include "Date.h"

int main()
{
    int y = 2000;
    std::cout << DateUtilities::isLeapYear(y) << '\n';
    std::cout << DateUtilities::days_of_month.size() << '\n';
    std::cout << DateUtilities::days_of_month[2] << '\n';
    std::cout << DateUtilities::isValidModernYear(1900) << '\n';
    std::cout << DateUtilities::isValidModernYear(1899) << '\n';

    Date::Date date1 (1,1,2000);
    std::cout << date1.getDay() << '.';
    std::cout << date1.getMonth() << '.';
    std::cout << date1.getYear() << '\n';
    return 0;
}
