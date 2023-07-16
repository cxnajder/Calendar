#pragma once

#include "Month.h"
#include "Year.h"

#include <array>

namespace Date
{

    class Day
    {
    public:
        Day(int, Month, Year);
        int getValue() const;
    private:
        int value;
        const std::array<int, 12> monthDays = 
            {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        bool isValid(int, int) const;
        bool isLeapDay(int, int, Year) const;
    };
    

}