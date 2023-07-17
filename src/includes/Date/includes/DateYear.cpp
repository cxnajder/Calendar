#include "DateYear.h"
#include "DateException.h"
#include <sstream>

namespace Date 
{


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