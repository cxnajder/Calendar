#pragma once

#include "CalYear.h"
#include "Date.h"

namespace Calendar
{

    class Calendar
    {
    public:
        Calendar();
        ~Calendar();
        Year getYear() const;

    private:
        Year * year;
        Date::Date * today;

        const Calendar & operator=(const Calendar &) = delete;
        Calendar(const Calendar &) = delete;
        
    };

}