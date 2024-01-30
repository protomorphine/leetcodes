//
// Created by D.Zaycev on 22.01.2024.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(SetMismatchTest, PositiveTests) {
    std::vector vec{1, 2, 2, 4};
    ASSERT_EQ(tasks::FindErrorNums(vec), (std::vector{2, 3}));

    vec = {1, 1};
    ASSERT_EQ(tasks::FindErrorNums(vec), (std::vector{1, 2}));
}