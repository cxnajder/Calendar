#include <iostream>
#include "Date.h"
#include "Calendar.h"


int main()
{
    Calendar::Calendar new_cal;

    std::cout << "Year : " <<
        new_cal
            .getYear()
            .getValue()
        << '\n';
    //
    std::cout << "Number of months in a year : " <<
        new_cal
            .getYear()
            .getMonths()
            .size()
        << '\n';
    //
    for(int i = 1; i <= 12; ++i)
    {
        std::cout << "Number of days in " << i;

        switch (i)
        {
        case 1:
            std::cout << "st ";
            break;
        case 2:
            std::cout << "nd ";
            break;
        case 3:
            std::cout << "rd ";
            break;
        default:
            std::cout << "th ";
            break;
        }
        std::cout << "month : " <<
            new_cal
                .getYear()
                .getMonths()
                .at(i - 1)
                .getDays()
                .size()
            << '\n';
        //
    }

    

    
    return 0;
}
