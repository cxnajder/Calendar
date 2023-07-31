#include "Calendar.h"
#include "CalendarElements.h"

namespace Calendar
{
    class Displayer
    {
    public:
        virtual void displayCal( my::Calendar &);
    protected:
        virtual void displayMonth( CalendarElement::Month &);
        virtual void displayDay( CalendarElement::Day &, int);
        virtual void displayEvent( CalendarElement::Event &, int) = 0;
    };
        
    class ConsoleDisplayer : public Displayer
    {
    public:
        void displayCal( my::Calendar &) override;
    protected:
        void displayMonth( CalendarElement::Month &) override;
        void displayDay( CalendarElement::Day &, int) override;
        void displayEvent( CalendarElement::Event &, int) override;
    };
}