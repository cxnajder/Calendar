#pragma once

#include "CalMonth.h"
#include <vector>

namespace Calendar
{
    class Year
    {
    public:
        Year(int);
        int getValue() const;
        std::vector<Month> getMonths() const;
        bool isLeap() const;

    private:
        int value;
        std::vector<Month> months;

        static const int max_year = 2300;
        static const int min_year = 1800;


        bool leapYearStatus = false;
        bool isValid(int) const;
        void prepearMonths();
    };
}