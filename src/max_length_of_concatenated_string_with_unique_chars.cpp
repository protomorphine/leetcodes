//
// Created by D.Zaycev on 23.01.2024.
//
#include <cstdint>

#include "tasks/tasks.h"

int tasks::MaxLength(const std::vector<std::string>& arr) {
    int kMaxLength = 0;
    std::vector<int> dp {0};

    for (const auto & kItem : arr) {

        int kKnownLetters = 0; int kDuplicated = 0;
        for (char k : kItem) {
            int kMask = 1 << (26 - ((k - 'a') + 1));
            kDuplicated |= kKnownLetters & kMask;
            kKnownLetters |= kMask;
        }

        if (kDuplicated > 0) {
            continue;
        }

        for (auto i = static_cast<int>(dp.size() - 1); i >= 0; --i) {
            if ((dp[i] & kKnownLetters) == 0) {
                dp.push_back(dp[i] | kKnownLetters);
            }

            kMaxLength = std::max(kMaxLength, std::popcount(static_cast<uint32_t>(dp.back())));
        }
    }

    return kMaxLength;
}