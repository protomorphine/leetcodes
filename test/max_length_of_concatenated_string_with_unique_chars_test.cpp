//
// Created by D.Zaycev on 23.01.2024.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(MaxLengthOfConcatenatedString, PositiveTests) {
    std::vector<std::string> vec {"un","iq","ue"};
    ASSERT_EQ(tasks::MaxLength(vec), 4);

    vec = {"cha","r","act","ers"};
    ASSERT_EQ(tasks::MaxLength(vec), 6);

    vec = {"abcdefghijklmnopqrstuvwxyz"};
    ASSERT_EQ(tasks::MaxLength(vec), 26);
}

TEST(MaxLengthOfConcatenatedString, NegativeTests) {
    std::vector<std::string> vec {"aa","bb"};
    ASSERT_EQ(tasks::MaxLength(vec), 0);

    vec = {"uu"};
    ASSERT_EQ(tasks::MaxLength(vec), 0);
}