cmake_minimum_required(VERSION 3.14)
project(GitHub_First_Project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
# Main.cpp
set(SOURCES main.cpp src/my_add.cpp)
add_executable(main ${SOURCES})

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)

FetchContent_Declare(
    benchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.9.0
)
FetchContent_MakeAvailable(benchmark)

find_package(benchmark REQUIRED)
target_link_directories()

# tests
enable_testing()
add_executable(tests test_add.cpp src/my_add.cpp)

target_link_libraries(tests gtest_main)

# benchmark
add_executable(benchmark_example benchmark_example.cpp src/my_add.cpp)

target_link_libraries(benchmark_example benchmark::benchmark)

include(GoogleTest)
gtest_discover_tests(tests)