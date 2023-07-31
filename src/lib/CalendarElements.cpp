#include "CalendarElements.h"
#include "MyException.h"
#include "DateUtilities.h"

namespace CalendarElement
{
    Event::Event(const std::string & title_ = "", const std::string & desc_ = "") 
        : title(title_), description(desc_)
    {}

    void Event::setTitle(const std::string & new_title)
    {
        title = new_title;
    }

    void Event::setDescription(const std::string & new_desc)
    {
        description = new_desc;
    }


    std::string Event::getTitle() const
    { return title; }

    std::string Event::getDescription() const
    { return description; }




    void Day::addEvent(std::string title = "", std::string description = "")
    {
        events.emplace_back(Event(title, description));
    }

    void Day::deleteEvent(std::size_t index)
    {
        if(index <= 0 || index > events.size())
            throw my::exception("Day::deleteEvent(): invalid iput (index)");

        auto it = events.begin() + index-1;
        events.erase(it);
    }

    std::vector<Event> Day::getEvents() const
    { return events; }


    Event & Day::operator[](std::size_t index)
    {
        if(index < 1 || index > events.size())
            throw my::exception("Day[]: invalid input (index)");

        return events[index -1];
    }

    std::size_t Day::size() const 
    { return events.size(); }




    Month::Month(int month, bool leap)
        : itsLeapYear(leap)
    {
        if(month < 1 || month > 12)
            throw my::exception("Month(): invalid input (month)");

        this->value = month;
        days.resize(DateUtilities::daysOfMonth(month, leap));
    }

    Month::Month(int month)
        : Month(month, false)
    {}
        

    int Month::getValue() const
    { return value; }

    std::vector<Day> Month::getDays() const
    { return days; }


    Day & Month::operator[](std::size_t index)
    {
        if(index < 1 || index > days.size())
            throw my::exception("Month[]: invalid input (index)");

        return days[index-1];
    }

    std::size_t Month::size() const 
    { return days.size(); }




    Year::Year(int val)
    {
        if(!DateUtilities::isValidModernYear(val))
            throw my::exception("Year(): invalid input (year not in modern range)");

        this->value = val;
        bool leapStatus = DateUtilities::isLeapYear(this->value);
        setMonths(leapStatus);
    }

    int Year::getValue() const
    { return value; }


    std::vector<Month> Year::getMonths() const
    { return months; }


    Month & Year::operator[](std::size_t index)
    {
        if(index < 1 || index > 12)
            throw my::exception("Year[]: invalid input (index)");

        return months[index-1];
    }


    void Year::setMonths(bool leapYear)
    {

        for(int month_num = 1; month_num <= 12; ++month_num)
        {
            months.emplace_back(Month(month_num, leapYear));
        }
    }
    
}
