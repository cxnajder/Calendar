#include "Date.h"

#include <sstream>

namespace Date
{


    Date::Date(int d, int m, int y) : year(y), month(m), day(d, m, y)  {}

    int Date::getDay()   const {return day.getValue();}
    int Date::getMonth() const {return month.getValue();}
    int Date::getYear()  const {return year.getValue();}




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




    Month::Month(Month::MonthName n): m_name(n) {}

    Month::Month(int m_number)
    {
        if (isValid(m_number))
            m_name = static_cast<Month::MonthName>(m_number);
        else
        {
            std::stringstream err_message;
            err_message << "Invalid Year value: " << m_number << " out of valid range: " 
                << 1 << '-' << 12;
            throw Exception(err_message.str());
        }
    }

    bool Month::isValid(int m_number)
    { return (m_number > 0 && m_number < 13); }

    int Month::getValue() const 
    { return static_cast<int>(m_name); }




    Year::Year(int val)
    {
        if ( isValid(val) )
            this->value = val;
        else
        {
            std::stringstream err_message;
            err_message << "Invalid Year value: " << val << " out of valid range: " 
                << min_year << '-' << max_year;
            throw Exception(err_message.str());
        }
    }

    int Year::getValue() const {return value;}

    bool Year::isLeap() const
    {
        const static int leapException    = 400;
        const static int nonLeapException = 100;

        return 
        (
            this->getValue() % 4 == 0 
            &&
            (
                this->getValue() % nonLeapException != 0 
                ||
                this->getValue() % leapException == 0
            )
        );
    }


    bool Year::isValid(int year_value) const
    {
        return ( year_value > min_year && year_value < max_year );
    }


}