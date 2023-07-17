add_library(Date Date.h Date.cpp)

add_subdirectory(includes)
target_link_libraries(Date PUBLIC DateException)
target_link_libraries(Date PRIVATE DateYear)
target_link_libraries(Date PRIVATE DateMonth)
target_link_libraries(Date PRIVATE DateDay)
target_include_directories(
    Date PUBLIC
    "${PROJECT_BINARY_DIR}/lib/Date"
    "${PROJECT_SOURCE_DIR}/lib/Date/includes"
)