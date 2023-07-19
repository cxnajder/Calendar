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

    CalendarElement::Event eve("Test event", "testing ...");
    std::cout << eve.getTitle() << '\n';
    std::cout << eve.getDescription() << '\n';

    CalendarElement::Day day;
    day.addEvent("Test day", "it's friday today, then saturday, sunday what?");
    std::cout << day[1].getTitle() << '\n';
    std::cout << day[1].getDescription() << '\n';
    
    CalendarElement::Month month(1);
    month[2].addEvent("Test month", "january 2nd here");
    std::cout << month[2][1].getTitle() << '\n';
    std::cout << month[2][1].getDescription() << '\n';

    CalendarElement::Year year(2000);
    year[2][29].addEvent("Test year", "it's leap year!!!");
    std::cout << year[2][29][1].getTitle() << '\n';
    std::cout << year[2][29][1].getDescription() << '\n';

    
    my::Calendar cal;
    
    
    my::Date today = cal.getTodaysDate(); 
    // it will return harcoded 1.1.2000 for now
    std::cout << today.getDay() << '.';
    std::cout << today.getMonth() << '.';
    std::cout << today.getYear() << '\n';
    

    (*cal.getYear())[1][1].addEvent("Test calendar", "wow! that thing works???");
    std::cout << (*cal.getYear())[1][1][1].getTitle() << '\n';
    std::cout << (*cal.getYear())[1][1][1].getDescription() << '\n';

    return 0;
}
