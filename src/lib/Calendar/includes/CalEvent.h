#pragma once

#include <string>

namespace Calendar
{

    class Event 
    {
    public:
        Event(const std::string &, const std::string &);
        void setTitle(const std::string &);
        void setDescription(const std::string &);
        std::string getTitle() const;
        std::string getDescription() const;

    private:
        std::string title;
        std::string description;
    };

}