//
// Created by D.Zaycev on 26.01.2024.
//
#include <numeric>

#include "tasks/tasks.h"

int tasks::MissingNumber(std::vector<int>& nums) {
    const auto n = static_cast<int>(nums.size());
    int required_sum = (n * (n + 1)) / 2;

    int current_sum = std::reduce(nums.begin(), nums.end());
    return required_sum - current_sum;
}