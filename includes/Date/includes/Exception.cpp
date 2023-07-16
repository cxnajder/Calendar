#include "Exception.h"


namespace Date
{
    Exception::Exception(){}

    Exception::Exception(const std::string & desc) 
    : description(desc)
    {
    }


    std::string Exception::what()    const {return description;}
    void Exception::setWhat(const std::string & desc) {description = desc;}



}