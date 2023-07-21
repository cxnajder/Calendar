#pragma once

#include "Date.h"
#include "CalendarElements.h"
#include <vector>


namespace my
{

    class Calendar
    {
    public:
        Calendar(my::Date);
        my::Date getTodaysDate() const;
        CalendarElement::Month & operator[](std::size_t);

    private:
        int currentYear;
        my::Date today;
        std::vector<CalendarElement::Month> months;
        void setMonths(bool);
        
    };
}