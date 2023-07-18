add_library(MyException MyException.h MyException.cpp)

add_library(DateUtilities DateUtilities.h DateUtilities.cpp)
target_link_libraries(DateUtilities PUBLIC MyException)

add_library(Date Date.h Date.cpp)
target_link_libraries(Date PUBLIC MyException)
target_link_libraries(Date PUBLIC DateUtilities)

add_library(CalendarElements CalendarElements.h CalendarElements.cpp)
target_link_libraries(CalendarElements PUBLIC MyException)
target_link_libraries(CalendarElements PUBLIC DateUtilities)

add_library(Calendar Calendar.h Calendar.cpp)
target_link_libraries(Calendar PUBLIC Date)
target_link_libraries(Calendar PUBLIC CalendarElements)