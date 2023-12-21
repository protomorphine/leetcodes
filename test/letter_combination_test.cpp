//
// Created by D.Zaycev on 21.12.2023.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(LetterCombinationsTest, PositiveTests){
    ASSERT_EQ(tasks::LetterCombinations("23"), (std::vector<std::string>{"ad","ae","af","bd","be","bf","cd","ce","cf"}));
    ASSERT_EQ(tasks::LetterCombinations("2"), (std::vector<std::string>{"a","b","c"}));
}

TEST(LetterCombinationsTest, NegativeTests){
    ASSERT_EQ(tasks::LetterCombinations(""), (std::vector<std::string>{}));
}