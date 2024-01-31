//
// Created by D.Zaycev on 31.01.2024.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(GroupAnagrams, PositiveTests) {
    std::vector<std::string> vec{"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::vector<std::string>> expected{
        {{"bat"}, {"tan", "nat"}, {"eat", "tea", "ate"}}};
    ASSERT_EQ(tasks::GroupAnagrams(vec), expected);

    vec = {""};
    expected = {{""}};
    ASSERT_EQ(tasks::GroupAnagrams(vec), expected);

    vec = {"a"};
    expected = {{"a"}};
    ASSERT_EQ(tasks::GroupAnagrams(vec), expected);
}
