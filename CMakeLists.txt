cmake_minimum_required(VERSION 3.26)
project(
        leetcodes
        DESCRIPTION "solving tasks from leetcode.com"
        VERSION 0.0.1
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(cmake/fetch_google_test.cmake)
include(cmake/task.cmake)

add_task(two_sum)
add_task(is_palindrome)
add_task(string_to_integer)
add_task(letter_combination)
add_task(remove_nth_from_end)
add_task(longest_common_prefix)
add_task(set_mismatch)
add_task(max_length_of_concatenated_string_with_unique_chars)
add_task(find_all_anagrams_in_string)
add_task(missing_number)
add_task(single_number)
add_task(group_anagrams)
add_task(length_of_longest_substring)
