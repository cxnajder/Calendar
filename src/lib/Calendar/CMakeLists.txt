add_library(Calendar Calendar.h Calendar.cpp)

add_subdirectory(includes)
target_link_libraries(Calendar PUBLIC CalendarEvent)
target_link_libraries(Calendar PUBLIC CalendarDay)
target_link_libraries(Calendar PUBLIC CalendarMonth)
target_include_directories(
    Calendar PUBLIC
    "${PROJECT_BINARY_DIR}/lib/Calendar"
    "${PROJECT_SOURCE_DIR}/lib/Calendar/includes"
)