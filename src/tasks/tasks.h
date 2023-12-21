//
// Created by kuper on 18.12.2023.
//

#ifndef LEETCODES_TASKS_H
#define LEETCODES_TASKS_H

#include <string>
#include <vector>
namespace tasks {

/// @brief returns indices of nums elements, which sum is target
/// @a https://leetcode.com/problems/two-sum/
/// @param[in] nums array of integers
/// @param[in] target integer to find sum
/// @return indices of nums elements
std::vector<int> TwoSum(const std::vector<int>& nums, int target);

/// @brief is given int is palindrome (for example: 121)
/// @a https://leetcode.com/problems/palindrome-number/
/// @param[in] x integer
/// @return true - if x is palindrome, otherwise - false
bool IsPalindrome(int x);

int MyAtoi(std::string& s);

std::vector<std::string> LetterCombinations(const std::string& digits);

}  // namespace tasks

#endif  // LEETCODES_TASKS_H
