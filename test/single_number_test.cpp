//
// Created by D.Zaycev on 30.01.2024.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

TEST(SingleNumber, PositiveTests) {
    std::vector vec{2, 2, 1};
    ASSERT_EQ(tasks::SingleNumber(vec), 1);

    vec = {4, 1, 2, 1, 2};
    ASSERT_EQ(tasks::SingleNumber(vec), 4);

    vec = {1};
    ASSERT_EQ(tasks::SingleNumber(vec), 1);
}

TEST(SingleNumber, NegativeTests) {

    std::vector vec {1, 2, 1, 2};
    ASSERT_EQ(tasks::SingleNumber(vec), 0);

}