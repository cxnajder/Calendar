add_library(CalendarEvent CalEvent.h CalEvent.cpp)
add_library(CalendarDay CalDay.h CalDay.cpp)
target_link_libraries(CalendarDay PRIVATE CalendarEvent)