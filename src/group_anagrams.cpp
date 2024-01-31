//
// Created by D.Zaycev on 31.01.2024.
//
#include <algorithm>
#include <unordered_map>

#include "tasks/tasks.h"

struct StringHash {
    using is_transparent = void;  // enables heterogenous lookup

    std::size_t operator()(std::string_view sv) const {
        std::hash<std::string_view> hasher;
        return hasher(sv);
    }
};

std::vector<std::vector<std::string>> tasks::GroupAnagrams(
    const std::vector<std::string>& strs) {
    std::unordered_map<std::string, std::vector<std::string>, StringHash,
                       std::equal_to<>>
        map{};

    for (auto const& str : strs) {
        auto temp = str;
        std::ranges::sort(temp.begin(), temp.end());
        if (map.contains(temp)) {
            map[temp].push_back(str);
            continue;
        }

        map.try_emplace(temp, std::vector{str});
    }

    std::vector<std::vector<std::string>> result{};
    result.reserve(map.size());

    for (auto const& [k, v] : map) {
        result.push_back(v);
    }

    return result;
}