//
// Created by kuper on 18.12.2023.
//
#include <gtest/gtest.h>

#include <numeric>
#include <vector>

#include "../src/tasks/tasks.h"

int GetSum(const std::vector<int>& indices, const std::vector<int>& source) {
    return std::accumulate(
        indices.begin(), indices.end(), 0,
        [&source](int init, int y) { return init + source[y]; });
}

TEST(TwoSumTest, PositiveTest) {
    std::vector<int> nums1 = {2, 7, 11, 15};
    std::vector<int> nums2 = {3, 2, 4};
    std::vector<int> nums3 = {3, 3};

    int target1 = 9;
    int target2 = 6;
    int target3 = 6;

    ASSERT_EQ(GetSum(tasks::TwoSum(nums1, target1), nums1), target1);
    ASSERT_EQ(GetSum(tasks::TwoSum(nums2, target2), nums2), target2);
    ASSERT_EQ(GetSum(tasks::TwoSum(nums3, target3), nums3), target3);
}

TEST(TwoSumTest, NegativeTest) {
    std::vector<int> nums1 = {2, 7, 11, 15};
    std::vector<int> nums2 = {3, 5};

    int target1 = 25;
    int target2 = 10;

    ASSERT_TRUE(tasks::TwoSum(nums1, target1).empty());
    ASSERT_TRUE(tasks::TwoSum(nums2, target2).empty());
}