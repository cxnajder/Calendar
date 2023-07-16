#pragma once

namespace Date
{

    class Year
    {
    public:
        Year(int);
        int getValue() const;
        bool isLeap() const;
    private:
        int value;
        static const int max_year = 2300;
        static const int min_year = 1800;
        bool isValid(int) const;
    };    

}