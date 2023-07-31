#pragma once

#include <string>
#include <vector>

namespace CalendarElement
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


    class Day
    {
    public:
        void addEvent(std::string, std::string);
        void deleteEvent(std::size_t);
        std::vector<Event> getEvents() const;
        Event & operator[](std::size_t);
        std::size_t size() const;

    private:
        std::vector<Event> events;
    };


    class Month
    {
    public:
        Month(int);
        Month(int, bool);
        int getValue() const;
        std::vector<Day> getDays() const;
        Day & operator[](std::size_t);
        std::size_t size() const;

    private:
        std::vector<Day> days;
        int value;
        bool itsLeapYear;
    };


    class Year
    {
    public:
        Year(int);
        int getValue() const;
        std::vector<Month> getMonths() const;
        Month & operator[](std::size_t);

    protected:
        std::vector<Month> months;
        void setMonths(bool);
        
    private:
        int value;
    };

}