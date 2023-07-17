#include <iostream>
#include "Date.h"
#include "Calendar.h"



void PrintDate(const Date::Date & d)
{
    std::cout << d.getDay() << '.' << d.getMonth() << '.' << d.getYear();

}

void PrintEvent(const Calendar::Event & ev)
{
    std::cout << ev.getTitle() << '\n' << ev.getDescription() << '\n';

}


int main()
{

    std::cout << "Calendar running...\n";

    
    try
    {
        Date::Date d1(29, 2, 2000);
        PrintDate(d1);
        std::cout << '\n';

        Date::Date d2(29, 2, 2001);
        PrintDate(d2);
        std::cout << '\n';
    }
    catch(Date::Exception e)
    {
        std::cerr << e.what() << '\n';
    }
    

    
    
    std::cout << "\nCreate 3 events in a day:\n\n";


    Calendar::Day d;
    d.addEvent("Test EVENT", "This is a test EVENT.");
    d.addEvent("Test EVENT 2", "This is a 2nd test EVENT.");
    d.addEvent("Test EVENT 3", "This is a 3rd test EVENT.");

    auto d_events = d.getEvents();
    for( Calendar::Event ev : d_events)
        PrintEvent(ev);
    
    std::cout << "\nDelete events 2 and 1:\n\n";

    d.deleteEvent(2);    
    d.deleteEvent(1);

    d_events = d.getEvents();
    for( Calendar::Event ev : d_events)
        PrintEvent(ev);
    //
    



    std::cout << "\nMonth tests:\n\n";
    
    Calendar::Month jan(1);

    auto jan_days = jan.getDays();
    std::cout << jan_days.size() << '\n';


    Calendar::Month feb(2);

    auto feb_days = feb.getDays();
    std::cout << feb_days.size() << '\n';

    return 0;
}
