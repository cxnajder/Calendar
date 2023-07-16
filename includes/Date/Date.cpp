#include "Date.h"


namespace Date
{
    Date::Date(int d, int m, int y) : year(y), month(m), day(d, m, y)  {}


        int Date::getDay()   const {return day.getValue();}
        int Date::getMonth() const {return month.getValue();}
        int Date::getYear()  const {return year.getValue();}
}