#pragma once

#include "CalEvent.h"
#include <vector>

namespace Calendar
{
    class Day
    {
    public:
        void addEvent(std::string, std::string);
        void deleteEvent(int);
        std::vector<Event> getEvents() const;
    private:
        std::vector<Event> events;
    };
}