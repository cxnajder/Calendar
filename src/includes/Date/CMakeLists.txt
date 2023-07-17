add_library(Date Date.h Date.cpp)

add_subdirectory(includes)
target_link_libraries(Date PUBLIC DateException)
target_link_libraries(Date PUBLIC DateYear)
target_link_libraries(Date PUBLIC DateMonth)
target_include_directories(
    Date PUBLIC
    "${PROJECT_BINARY_DIR}/includes/Date"
    "${PROJECT_SOURCE_DIR}/includes/Date/includes"
)