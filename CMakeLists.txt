cmake_minimum_required(VERSION 3.14)
project(GitHub_First_Project)

include_directories(include)

set(SOURCES main.cpp src/my_add.cpp)
add_executable(main ${SOURCES})