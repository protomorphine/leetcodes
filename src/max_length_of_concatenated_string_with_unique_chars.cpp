//
// Created by D.Zaycev on 23.01.2024.
//
#include <cstdint>

#include "tasks/tasks.h"

int tasks::MaxLength(const std::vector<std::string>& arr) {
    int max_length = 0;
    std::vector<int> dp {0};

    for (const auto & string : arr) {

        int known_letters = 0; int duplicated = 0;
        for (char ch : string) {
            int mask = 1 << (26 - ((ch - 'a') + 1));
            duplicated |= known_letters & mask;
            known_letters |= mask;
        }

        if (duplicated > 0) {
            continue;
        }

        for (auto i = static_cast<int>(dp.size() - 1); i >= 0; --i) {
            if ((dp[i] & known_letters) == 0) {
                dp.push_back(dp[i] | known_letters);
            }

            max_length = std::max(max_length, std::popcount(static_cast<uint32_t>(dp.back())));
        }
    }

    return max_length;
}