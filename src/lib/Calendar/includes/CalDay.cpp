#include "CalDay.h"
#include <cassert>

namespace Calendar
{
    void Day::addEvent(std::string title = "", std::string description = "")
    {
        events.emplace_back(Event(title, description));
    }

    void Day::deleteEvent(int index)
    {
        assert(index > 0 && index < events.size());
        
        auto it = events.begin() + index - 1;
        events.erase(it);
    }

    std::vector<Event> Day::getEvents() const
    { return events; }
}