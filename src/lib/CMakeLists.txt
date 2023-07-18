add_library(DateUtilities DateUtilities.h DateUtilities.cpp)
add_library(Date Date.h Date.cpp)
target_link_libraries(Date PUBLIC DateUtilities)