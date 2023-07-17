#pragma once
#include "CalDay.h"

namespace Calendar
{
    class Month
    {
    public:
        Month(int);
        int getValue() const;
        std::vector<Day> getDays() const;

    private:
        std::vector<Day> days;
        int value;

        bool leapYear = false;
        int getNymberOfDays() const;
    };
}