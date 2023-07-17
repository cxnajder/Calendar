#include "CalMonth.h"
#include <cassert>
#include <array>

namespace Calendar
{
        Month::Month(int month)
        {
            assert(month > 0 && month < 13);

            value = month;
            days.resize(getNymberOfDays());
        }

        int Month::getValue() const
        { return value; }

        std::vector<Day> Month::getDays() const
        { return days; }

        int Month::getNymberOfDays() const
        {
            static const std::array<int, 12> daysNumbers = 
                {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            int numbOfDeys = daysNumbers[value - 1];
            if (leapYear && this->value == 2)
                return ++numbOfDeys;
            return numbOfDeys;
        }

}