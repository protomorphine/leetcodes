//
// Created by D.Zaycev on 22.01.2024.
//
#include <numeric>
#include <unordered_set>

#include "tasks/tasks.h"

std::vector<int> tasks::FindErrorNums(const std::vector<int>& nums) {
    auto n = static_cast<int>(nums.size());

    const int kExpectedSum = n * (n + 1) / 2;
    int actual_sum = std::reduce(nums.begin(), nums.end());

    std::unordered_set<int> set{};
    int duplicated = 0;
    for (auto num : nums) {
        if (set.contains(num)) {
            duplicated = num;
            break;
        }

        set.insert(num);
    }

    auto missing_num = kExpectedSum - (actual_sum - duplicated);

    return {duplicated, missing_num};
}