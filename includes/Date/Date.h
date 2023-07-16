#pragma once

#include "includes/Year.h"
#include "includes/Month.h"
#include "includes/Day.h"
#include "includes/Exception.h"


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