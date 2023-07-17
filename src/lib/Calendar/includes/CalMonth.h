#pragma once
#include "CalDay.h"

namespace Calendar
{
    class Month
    {
    public:
        Month(int);
        Month(int, bool);
        int getValue() const;
        std::vector<Day> getDays() const;

    private:
        std::vector<Day> days;
        int value;

        bool leapYear = false;
        int getNymberOfDays() const;
    };
}