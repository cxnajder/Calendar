cmake_minimum_required(VERSION 3.12)
project(CalendarMain VERSION 0.1.0)
add_executable(${PROJECT_NAME} Main.cpp)
add_subdirectory(lib)
target_link_libraries(${PROJECT_NAME} PUBLIC DateUtilities)
target_link_libraries(${PROJECT_NAME} PUBLIC Date)
target_link_libraries(${PROJECT_NAME} PUBLIC MyException)
target_link_libraries(${PROJECT_NAME} PUBLIC Calendar)
target_link_libraries(${PROJECT_NAME} PUBLIC CalendarDisplayer)
target_include_directories(
    ${PROJECT_NAME} PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/lib"
)



