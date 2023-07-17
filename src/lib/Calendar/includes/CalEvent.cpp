#include "CalEvent.h"

namespace Calendar
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

}