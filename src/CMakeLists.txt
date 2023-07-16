cmake_minimum_required(VERSION 3.12)
project(Calender VERSION 0.1.0)

set(LDATE "lib/Date/")

add_library(Date ${LDATE}/Date.h ${LDATE}/Date.cpp)

add_executable(${PROJECT_NAME} Main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Date)

