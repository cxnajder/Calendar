#include "Calendar.h"

namespace my
{
    Calendar::Calendar()
    {
        year = new CalendarElement::Year(2000);
        today = new my::Date(1, 1, 2000);
    }
    Calendar::~Calendar()
    {
        delete today;
        delete year;
    }

    CalendarElement::Year * Calendar::getYear()
    {
        return year;
    }


        my::Date Calendar::getTodaysDate() const
        { return *today; }
}