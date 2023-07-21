#include "Calendar.h"
#include "DateUtilities.h"
#include "MyException.h"

namespace my
{
    Calendar::Calendar(my::Date today_)
        : today(today_)
    {
        if(!DateUtilities::isValidModernYear(today.getYear()))
            throw my::exception("Calendar(): invalid input (year not in modern range)");

        currentYear = today.getYear();

        bool leapStatus = DateUtilities::isLeapYear(currentYear);
        setMonths(leapStatus);
    }


    my::Date Calendar::getTodaysDate() const
        { return today; }


    CalendarElement::Month & Calendar::operator[](std::size_t index)
    {
        if(index < 1 || index > 12)
            throw my::exception("Year[]: invalid input (index)");

        return months[index-1];
    }


    void Calendar::setMonths(bool leapYear)
    {
        for(int month_num = 1; month_num <= 12; ++month_num)
        {
            months.emplace_back(CalendarElement::Month(month_num, leapYear));
        }
    }
}