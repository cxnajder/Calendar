#include "Month.h"
#include "Exception.h"
#include <sstream>

namespace Date
{
    Month::Month(Month::MonthName n): m_name(n) 
    {}

    Month::Month(int m_number)
    {
        if (isValid(m_number))
            m_name = static_cast<Month::MonthName>(m_number);
        else
        {
            std::stringstream err_message;
            err_message << "Invalid Year value: " << m_number << " out of valid range: " 
                << 1 << '-' << 12;
            throw Exception(err_message.str());
        }
    }

    bool Month::isValid(int m_number)
    {
        return (m_number > 0 && m_number < 13);
    }

    int Month::getValue() const {return static_cast<int>(m_name);}
}