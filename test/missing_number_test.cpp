//
// Created by D.Zaycev on 26.01.2024.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(MissingNumber, PositiveTests) {
    std::vector<int>vec {9,6,4,2,3,5,7,0,1};
    ASSERT_EQ(tasks::MissingNumber(vec), 8);

    vec = {0,1};
    ASSERT_EQ(tasks::MissingNumber(vec), 2);

    vec = {3,0,1};
    ASSERT_EQ(tasks::MissingNumber(vec), 2);
}

TEST(MissingNumber, NegativeTests) {
    std::vector<int>vec {};
    ASSERT_EQ(tasks::MissingNumber(vec), 0);

    vec = {1, 2, 3, 4, 5, 6};
    ASSERT_EQ(tasks::MissingNumber(vec), 0);
}