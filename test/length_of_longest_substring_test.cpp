//
// Created by D.Zaycev on 06.02.2024.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(LenthOfLongestSubstringTests, CommonTests){
    ASSERT_EQ(tasks::LengthOfLongestSubstring("abcabcbb"), 3);
    ASSERT_EQ(tasks::LengthOfLongestSubstring("bbbbb"), 1);
    ASSERT_EQ(tasks::LengthOfLongestSubstring("pwwkew"), 3);
}