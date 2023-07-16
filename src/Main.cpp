#include <iostream>
#include "lib/Date/Date.h"


void PrintDate(const Date::Date & d)
{
    std::cout << d.getDay() << '.' << d.getMonth() << '.' << d.getYear();

}

int main()
{
    try
    {
        Date::Date d1(29, 2, 2000);
        PrintDate(d1);
        std::cout << '\n';

        Date::Date d2(29, 2, 2001);
        PrintDate(d2);
        std::cout << '\n';
    }
    catch(Date::Exception e)
    {
        std::cerr << e.what() << '\n';
    }

    
    return 0;
}
