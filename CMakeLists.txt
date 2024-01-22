cmake_minimum_required(VERSION 3.26)
project(
        leetcodes
        DESCRIPTION "solving tasks from leetcode.com"
        VERSION 0.0.1
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(cmake/fetch_google_test.cmake)

add_executable(leetcodes main.cpp
        src/tasks/tasks.h
        src/two_sum.cpp
        test/two_sum_test.cpp
        src/is_palindrome.cpp
        test/is_palindrome_test.cpp
        src/string_to_integer.cpp
        test/string_to_integer_test.cpp
        src/letter_combination.cpp
        test/letter_combination_test.cpp
        src/data-structures/list_node.h
        src/remove_nth_from_end.cpp
        test/remove_nth_from_end.cpp
        src/longest_common_prefix.cpp
        test/longest_common_prefix_test.cpp
        src/set_mismatch.cpp
        test/set_mismatch_test.cpp
)

target_link_libraries(
        leetcodes
        GTest::gtest_main
)
