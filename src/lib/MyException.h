#ifndef MY_EXCEPTION__
#define MY_EXCEPTION__

#include <stdexcept>
#include <string>

namespace my
{
    class exception: public std::runtime_error
    {
    public:
        exception(const std::string &);
    };

    void throwRuntime(const std::string &, const std::string &);   
    
}

#endif