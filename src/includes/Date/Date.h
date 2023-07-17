#pragma once

#include <string>
#include <array>

#include "DateException.h"
#include "DateYear.h"
#include "DateMonth.h"


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
    

    class Date 
    {
    public:
        int getDay() const;
        int getMonth() const;
        int getYear() const;

        Date(int, int ,int);
    private:
        Year year;
        Month month;
        Day day;

    };

}