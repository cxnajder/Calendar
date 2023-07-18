#pragma once

#include "Date.h"
#include "CalendarElements.h"


namespace my
{
    class Calendar
    {
    public:
        Calendar();
        ~Calendar();
        CalendarElement::Year * getYear();
        my::Date getTodaysDate() const;

    private:
        CalendarElement::Year * year;
        my::Date * today;

        const Calendar & operator=(const Calendar &) = delete;
        Calendar(const Calendar &) = delete;
        
    };
}