#include <iostream>
#include "DateUtilities.h"
#include "Date.h"
#include "Calendar.h"

int main()
{
    int y = 2000;
    std::cout << DateUtilities::isLeapYear(y) << '\n';
    std::cout << DateUtilities::days_of_month.size() << '\n';
    std::cout << DateUtilities::days_of_month[2] << '\n';
    std::cout << DateUtilities::isValidModernYear(1900) << '\n';
    std::cout << DateUtilities::isValidModernYear(1899) << '\n';

    my::Date date1 (2,2,2000);
    std::cout << date1.getDay() << '.';
    std::cout << date1.getMonth() << '.';
    std::cout << date1.getYear() << '\n';

    my::Calendar cal;
    /*
    terminate called after throwing an instance of 'my::exception'
    what():  Month(): invalid input (month)
    Aborted (core dumped)
    */

    /*
    my::Date today = cal.getTodaysDate();
    std::cout << today.getDay() << '.';
    std::cout << today.getMonth() << '.';
    std::cout << today.getYear() << '\n';
    */

    //(*cal.getYear())[1][1].addEvent("Test", "123 test 456");
    //std::cout << (*cal.getYear())[1][1][1].getTitle() << '\n';

    return 0;
}
