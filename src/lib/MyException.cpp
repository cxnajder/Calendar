#include "MyException.h"

namespace My
{

    Exception::Exception(const std::string & msg)
        : std::runtime_error(msg)
    {}
    
}