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


    Calendar::Month feb1(2, false);

    auto feb1_days = feb1.getDays();
    std::cout << feb1_days.size() << '\n';


    Calendar::Month feb2(2, true);

    auto feb2_days = feb2.getDays();
    std::cout << feb2_days.size() << '\n';


    std::cout << "\nYear tests:\n\n";

    Calendar::Year y1(2000);

    std::cout << y1.getMonths().at(1).getDays().size() << '\n';
    std::cout << y1.isLeap() << '\n';

        Calendar::Year y2(2001);
    
    std::cout << y2.getMonths().at(1).getDays().size() << '\n';
    std::cout << y2.isLeap() << '\n';




    return 0;
}
