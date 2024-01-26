//
// Created by D.Zaycev on 26.01.2024.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(FindAllAnagramsInString, PositiveTests){
    ASSERT_EQ(tasks::FindAnagrams("cbaebabacd", "abc"), (std::vector<int> {0, 6}));
    ASSERT_EQ(tasks::FindAnagrams("abab", "ab"), (std::vector<int> {0, 1, 2}));
}

TEST(FindAllAnagramsInString, NegativeTests){
    ASSERT_EQ(tasks::FindAnagrams("awiduawd", "nnnnn"), (std::vector<int> {}));
    ASSERT_EQ(tasks::FindAnagrams("okijjloji", "asec"), (std::vector<int> {}));
}