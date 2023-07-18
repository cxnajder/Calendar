#include "DateUtilities.h"
#include "MyException.h"

namespace DateUtilities
{
    enum class Months {
        jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };


    bool isLeapYear(const int & year)
    {
        constexpr static int leapException = 400;
        constexpr static int nonLeapException = 100;

        return 
        (
            year % 4 == 0 
            &&
            (
                year % nonLeapException != 0 
                ||
                year % leapException == 0
            )
        );
    }

    bool isValidModernYear(const int & year)
    {
        static constexpr int max_year = 2200;
        static constexpr int min_year = 1900;

        return ( year >= min_year && year <= max_year );
    }

    bool isValidMonth(const int & month)
    {
        return (month > 0 && month < 13);
    }

    bool isValidMonthDay(const int & day, const int & month, const int & year)
    {
        if (!isValidMonth(month))
            throw my::exception("isValidMonthDay(): invalid input (month)");
        
        if (day <= days_of_month[month])
            return true;
        if (isLeapYear(year) && month == 2 && day == 29)
            return true;
        return false;
    }


    int daysOfMonth(const int & month, const int & year)
    {
        if (!isValidMonth(month))
            throw my::exception("daysOfMonth(): invalid input (month)");
            
        if (isLeapYear(year) && month == 2)
            return 29;
        return days_of_month[month];
    }


    int daysOfMonth(const int & month, const bool leapYear)
    {
        if (!isValidMonth(month))
            throw my::exception("daysOfMonth(): invalid input (month)");
            
        if (leapYear && month == 2)
            return 29;
        return days_of_month[month];
    }

}