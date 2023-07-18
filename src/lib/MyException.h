#pragma once
#include <exception>

namespace My
{
    class Exception : public std::runtime_error
    {
        Exception(const std::string &)
    };
}