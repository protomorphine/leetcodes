//
// Created by D.Zaycev on 20.12.2023.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(StringToIntegerTest, PositiveTests) {
    std::string s = "-42";
    int expected = -42;

    ASSERT_EQ(tasks::MyAtoi(s), expected);

    s = "42";
    expected = 42;
    ASSERT_EQ(tasks::MyAtoi(s), expected);

    s = "4193 with words";
    expected = 4193;
    ASSERT_EQ(tasks::MyAtoi(s), expected);
}

TEST(StringToIntegerTest, NegativeTests) {
    std::string s = "-+42";
    int expected = 0;

    ASSERT_EQ(tasks::MyAtoi(s), expected);

    s = "awd";
    expected = 0;
    ASSERT_EQ(tasks::MyAtoi(s), expected);

    s = "+-32 ";
    expected = 0;
    ASSERT_EQ(tasks::MyAtoi(s), expected);
}