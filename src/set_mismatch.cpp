//
// Created by D.Zaycev on 22.01.2024.
//
#include <numeric>
#include <unordered_map>

#include "tasks/tasks.h"

std::vector<int> tasks::FindErrorNums(const std::vector<int>& nums) {
    auto n = static_cast<int>(nums.size());

    int kExpectedSum = n * (n + 1) / 2;
    int kActualSum = std::reduce(nums.begin(), nums.end());

    std::unordered_map<int, int> map{};
    int duplicated = 0;
    for (auto num : nums) {
        if (map.contains(num)) {
            duplicated = num;
            break;
        }

        map.insert({num, 1});
    }

    auto kMissingNum = kExpectedSum - (kActualSum - duplicated);

    return {duplicated, kMissingNum};
}