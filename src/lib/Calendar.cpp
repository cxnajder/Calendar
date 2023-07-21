#include "Calendar.h"

namespace my
{
    Calendar::Calendar(my::Date today_)
        : Year(today_.getYear()), today(today_)
    {}

    my::Date Calendar::getTodaysDate() const
        { return today; }
}