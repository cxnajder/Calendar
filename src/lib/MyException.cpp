#include "MyException.h"

namespace my
{

    exception::exception(const std::string & msg)
        : std::runtime_error(msg)
    {}

    void throwRuntime(const std::string & msg1, const std::string & msg2) 
    {
        throw std::runtime_error(msg1 + ' ' + msg2);
    }
}