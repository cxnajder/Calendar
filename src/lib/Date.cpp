#include "Date.h"
#include "DateUtilities.h"


namespace Date
{
    
    Date::Date(int d, int m, int y)
    {
        using namespace DateUtilities;
        
        if (isValidMonth(m) && isValidModernYear(y) && isValidMonthDay(d, m, y))
        {
            day = d;
            month = m;
            year = y;
        }
    }

    int Date::getDay() const 
    { return day; }

    int Date::getMonth() const 
    { return month; }

    int Date::getYear() const 
    { return year; }
}