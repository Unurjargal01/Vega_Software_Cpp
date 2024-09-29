cmake_minimum_required(VERSION 3.14)
project(GitHub_First_Project)

include_directories(include)

set(SOURCES main.cpp src/my_add.cpp)
add_executable(main ${SOURCES})

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(tests test_add.cpp src/my_add.cpp)
target_link_libraries(tests gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)