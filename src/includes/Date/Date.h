#pragma once

#include <string>
#include <array>

#include "DateException.h"


namespace Date
{


    class Month
    {
    public:
        enum class MonthName {
            jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
        };

        Month(Month::MonthName n);
        Month(int);

        int getValue() const;

    private: 
        Month::MonthName m_name;
        bool isValid(int);
    };


    class Year
    {
    public:
        Year(int);
        int getValue() const;
        bool isLeap() const;
    private:
        int value;
        static const int max_year = 2300;
        static const int min_year = 1800;
        bool isValid(int) const;
    };    


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