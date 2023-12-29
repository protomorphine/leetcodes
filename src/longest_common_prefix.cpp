//
// Created by D.Zaycev on 29.12.2023.
//

#include <algorithm>

#include "tasks/tasks.h"

namespace internal {
std::string LongestCommonPrefix(std::string_view s1, std::string_view s2) {
    auto first = s1.begin();
    auto second = s2.begin();

    std::string prefix{};
    while (first != s1.end() && second != s2.end() && *first == *second) {
        prefix += *first;
        ++first;
        ++second;
    }

    return prefix;
}
}  // namespace internal

std::string tasks::LongestCommonPrefix(std::vector<std::string>& strs) {
    if (strs.empty()) {
        return "";
    }
    if (strs.size() == 1) {
        return strs.at(0);
    }

    std::ranges::sort(strs.begin(), strs.end());
    return internal::LongestCommonPrefix(strs.front(), strs.back());
}