cmake_minimum_required(VERSION 3.12)
project(Calender VERSION 0.1.0)
add_executable(${PROJECT_NAME} Main.cpp)
add_subdirectory(lib/Date)
add_subdirectory(lib/Calendar)
target_link_libraries(${PROJECT_NAME} PUBLIC Date)
target_link_libraries(${PROJECT_NAME} PUBLIC Calendar)
target_include_directories(
    ${PROJECT_NAME} PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/lib/Date"
    "${PROJECT_SOURCE_DIR}/lib/Calendar"
)



