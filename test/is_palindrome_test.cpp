//
// Created by kuper on 19.12.2023.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(IsPalindromeTest, PositiveTests){
    ASSERT_EQ(tasks::IsPalindrome(121), true);
    ASSERT_EQ(tasks::IsPalindrome(9889), true);
}

TEST(IsPalindromeTest, NegativeTests){
    ASSERT_EQ(tasks::IsPalindrome(-121), false);
    ASSERT_EQ(tasks::IsPalindrome(10), false);
}