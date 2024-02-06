//
// Created by kuper on 19.12.2023.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(IsPalindromeTest, PositiveTests){
    ASSERT_TRUE(tasks::IsPalindrome(121));
    ASSERT_TRUE(tasks::IsPalindrome(9889));
}

TEST(IsPalindromeTest, NegativeTests){
    ASSERT_FALSE(tasks::IsPalindrome(-121));
    ASSERT_FALSE(tasks::IsPalindrome(10));
}