#include "Day.h"

#include <sstream>

#include "Exception.h"

namespace Date
{
    Day::Day(int day, Month m, Year year)
    {
        int month = m.getValue();

        if( isValid(day, month) || isLeapDay(day, month, year))
        {
            this->value = day;
        }
        else
        {
            std::stringstream err_message;
            err_message 
                << "Invalid Day value: " << day << " (" << day 
                << '.' << month << '.' << year.getValue() << ") "
                << " out of valid range: " << 0 << '-';
            if(isLeapDay(29, month, year)) 
                err_message << 29;
            else
                err_message << monthDays[month-1];
            throw Exception(err_message.str());
        }
    }
    int Day::getValue() const {return value;}
    bool Day::isValid(int day, int month) const 
    { 
        return (day > 0 && day <= monthDays[month-1]);
    }
    bool Day::isLeapDay(int day, int month, Year year) const 
    {
        return (year.isLeap() && month == 2 && day == 29);
    }
}