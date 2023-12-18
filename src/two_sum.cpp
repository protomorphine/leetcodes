//
// Created by kuper on 18.12.2023.
//

#include <unordered_map>

#include "tasks/tasks.h"

std::vector<int> tasks::TwoSum(const std::vector<int>& nums, int target) {
    if (nums.size() < 2) {
        return {};
    }

    if (nums.size() == 2 && nums[0] + nums[1] == target) {
        return {0, 1};
    }

    std::unordered_map<int, int> previous{};

    for (int i = 0; i < nums.size(); ++i) {
        if (int diff = target - nums[i]; previous.contains(diff)) {
            return {previous[diff], i};
        }

        previous.insert({nums[i], i});
    }

    return {};
}