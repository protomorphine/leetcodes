//
// Created by D.Zaycev on 30.01.2024.
//
#include "tasks/tasks.h"

int tasks::SingleNumber(const std::vector<int>& nums) {
    int acc = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        acc ^= nums[i];
    }
    return acc;
}