//
// Created by D.Zaycev on 06.02.2024.
//
#include <algorithm>
#include <unordered_map>

#include "tasks/tasks.h"

int tasks::LengthOfLongestSubstring(std::string_view s) {
    int max = 0;
    size_t left = 0;
    size_t right = 0;

    std::unordered_map<char, int> store{};

    auto isUniq = [&store](std::string_view str) {
        return !std::ranges::any_of(str.begin(), str.end(), [&store](char ch) {
            return store[ch] > 1;
        });
    };

    while (right < s.size()) {
        store[s[right]]++;

        if (isUniq(s.substr(left, right - left + 1))) {
            max = std::max(max, static_cast<int>(right - left + 1));
        } else {
            store[s[left]]--;
            left++;
        }

        right++;
    }

    return max;
}