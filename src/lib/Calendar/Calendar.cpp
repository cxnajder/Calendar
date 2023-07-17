#include "Calendar.h"

namespace Calendar
{
    Calendar::Calendar()
    {
        int year_ = 2000;

        year = new Year(year_);
        today = new Date::Date(1, 1, year_);
    }
    Calendar::~Calendar()
    {
        delete today;
        delete year;
    }

    Year Calendar::getYear() const
    {
        return *year;
    }
}