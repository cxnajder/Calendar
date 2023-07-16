#pragma once

#include <string>

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

}
