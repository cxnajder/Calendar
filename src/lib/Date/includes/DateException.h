#pragma once

#include <string>

namespace Date 
{
    class Exception
    {
    public:
        Exception();
        Exception(const std::string &);
        std::string what() const;
    protected:
        void setWhat(const std::string &);
    private:
        std::string description;
    };
}

