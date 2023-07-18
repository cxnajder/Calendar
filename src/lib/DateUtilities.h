#pragma once
#include <array>
namespace DateUtilities
{
    enum class Months;
    const std::array<int, 13> days_of_month = 
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    bool isLeapYear(const int&);
    bool isValidModernYear(const int&);
    bool isValidMonth(const int&);
    bool isValidMonthDay(const int&, const int&, const int&);
    int daysOfMonth(const int&, const int&);
    int daysOfMonth(const int&, const bool);

}