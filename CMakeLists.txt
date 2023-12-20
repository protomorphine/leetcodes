cmake_minimum_required(VERSION 3.26)
project(
        leetcodes
        DESCRIPTION "solving tasks from leetcode.com"
        VERSION 0.0.1
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(cmake/fetch_google_test.cmake)

add_executable(
        leetcodes
        main.cpp
        src/tasks/tasks.h
        src/two_sum.cpp
        test/two_sum_test.cpp
        test/is_palindrome_test.cpp
        src/is_palindrome.cpp
        src/string_to_integer.cpp
        test/string_to_integer_test.cpp
)

target_link_libraries(
        leetcodes
        GTest::gtest_main
)
