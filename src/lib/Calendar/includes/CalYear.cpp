#include "CalYear.h"
#include "CalMonth.h"
#include <cassert>
#include <algorithm>

namespace Calendar
{

    Year::Year(int val)
    {
        assert(isValid(val));
        
        this->value = val;
        if(isLeap())
            leapYearStatus = true;
        prepearMonths();
    }

    int Year::getValue() const
    { return value; }


    std::vector<Month> Year::getMonths() const
    { return months; }


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

    void Year::prepearMonths()
    {
        months.reserve(12);

        for(int month_num = 1; month_num <= 12; ++month_num)
        {
            months.emplace_back(Month(month_num, leapYearStatus));
        }
    }
    
}