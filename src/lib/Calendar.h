#pragma once

#include "Date.h"
#include "CalendarElements.h"


namespace my
{

    class Calendar : public CalendarElement::Year
    // Calendar is kind of a Year (is for specific year, contains months and all methods seting them)
    // that also contains today's date.
    {
    public:
        Calendar(my::Date);
        my::Date getTodaysDate() const;

    private:
        my::Date today;
        
    };

}