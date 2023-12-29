//
// Created by D.Zaycev on 29.12.2023.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(LongestCommonPrefixTest, PositiveTests){
    std::vector<std::string> input1 {"flower","flow","flight"};

    ASSERT_EQ(tasks::LongestCommonPrefix(input1), "fl");

    std::vector<std::string>input2 {"test", "temp", "tea", "teapot", "tegridy"};
    ASSERT_EQ(tasks::LongestCommonPrefix(input2), "te");
}

TEST(LongestCommonPrefixTest, NegativeTests){
    std::vector<std::string> empty{};
    ASSERT_EQ(tasks::LongestCommonPrefix(empty), "");
}