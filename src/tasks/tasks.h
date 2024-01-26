//
// Created by kuper on 18.12.2023.
//

#ifndef LEETCODES_TASKS_H
#define LEETCODES_TASKS_H

#include <string>
#include <vector>

#include "../data-structures/list_node.h"
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

/// @brief Convert string to integer
/// @a https://leetcode.com/problems/string-to-integer-atoi/description/
/// @param s string
/// @return integer
int MyAtoi(std::string& s);

/// @brief Given a string containing digits from 2-9 inclusive,
/// return all possible letter combinations that the number could represent. Return the answer in any order.
/// @a https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
/// @param[in] digits string containing digits from 2-9 inclusive
/// @return all possible letter combinations that the number
std::vector<std::string> LetterCombinations(const std::string& digits);

/// @brief Given the head of a linked list, remove the nth node from the end of the list and return its head.
/// @a https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
/// @param head head of linked list
/// @param n position to delete from end
/// @return head after deletion
ds::ListNode* RemoveNthFromEnd(ds::ListNode* head, int n);

/// @brief  find the longest common prefix string amongst an array of strings.
/// @a https://leetcode.com/problems/longest-common-prefix/description/
/// @param strs array of strings
/// @return longest common prefix string
std::string LongestCommonPrefix(std::vector<std::string>& strs);

/// @brief Find the number that occurs twice and the number that is missing and return them in the form of an array.
/// @a https://leetcode.com/problems/set-mismatch/
/// @param nums array.
/// @return number that occurs twice and the number that is missing.
std::vector<int> FindErrorNums(const std::vector<int>& nums);

/// @brief You are given an array of strings arr. A string s is formed by the concatenation of a subsequence of arr that has unique characters.
/// @a https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/description/
/// @param arr array with strings.
/// @return maximum possible length of s.
int MaxLength(const std::vector<std::string>& arr);

/// @brief Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.
/// @a https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
/// @param s anagram container
/// @param p anagram source
/// @return array of indices from s
std::vector<int> FindAnagrams(std::string_view s, std::string_view p);
}  // namespace tasks

#endif  // LEETCODES_TASKS_H
