#pragma once

#include <string>
#include <array>

#include "DateException.h"
#include "DateYear.h"
#include "DateMonth.h"
#include "DateDay.h"


namespace Date
{

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