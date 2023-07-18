add_library(MyException MyException.h MyException.cpp)

add_library(DateUtilities DateUtilities.h DateUtilities.cpp)
target_link_libraries(DateUtilities PUBLIC MyException)

add_library(Date Date.h Date.cpp)
target_link_libraries(Date PUBLIC MyException)
target_link_libraries(Date PUBLIC MyException)