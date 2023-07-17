cmake_minimum_required(VERSION 3.12)
project(Calender VERSION 0.1.0)
add_executable(${PROJECT_NAME} Main.cpp)
add_subdirectory(includes/Date)
target_link_libraries(${PROJECT_NAME} PUBLIC Date)
target_include_directories(
    ${PROJECT_NAME} PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/includes/Date"
)



