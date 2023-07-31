#include "CalendarDisplayer.h"
#include <iostream>

namespace Calendar
{
    void Displayer::displayCal( my::Calendar & cal)
    {
        for(int month = 1; month <= 12; ++month)
            displayMonth(cal[month]);
    }

    void Displayer::displayMonth( CalendarElement::Month & month)
    {
        for(int day = 1; day <= month.size(); ++day)
            displayDay(month[day], day);
    }

    void Displayer::displayDay( CalendarElement::Day & day, int day_num)
    {
        for(int event = 1; event <= day.size(); ++event)
            displayEvent(day[event], event);
    }    





    void ConsoleDisplayer::displayCal( my::Calendar & cal)
    {
        std::cout << "#======================================#\n";
        std::cout << "Year: " << cal.getCurrentYear() << '\n';
        Displayer::displayCal(cal);
    }

    void ConsoleDisplayer::displayMonth( CalendarElement::Month & month)
    {
        std::cout << "+-------------------------------------+\n";
        std::cout << "Month: " << month.getValue() << '\n';
        std::cout << "+ - - - - - - - - - - - - - - - - - - +\n";
        Displayer::displayMonth(month);
    }

    void ConsoleDisplayer::displayDay( CalendarElement::Day & day, int day_num)
    {
        std::cout << "Day: " << day_num << '\n';
        if(day.size())
        {
            Displayer::displayDay(day, day_num);
        
        }
    }    

    void ConsoleDisplayer::displayEvent( CalendarElement::Event & event, int event_num)
    {

        std::cout << "\t" << event_num << ") " << event.getTitle() << '\n';
        std::cout << "\t\t" << event.getDescription() << '\n';
    }    
}