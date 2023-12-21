//
// Created by D.Zaycev on 21.12.2023.
//
#include <algorithm>
#include <unordered_map>

#include "tasks/tasks.h"

std::vector<std::string> tasks::LetterCombinations(const std::string& digits){
    static const std::unordered_map<char, std::vector<std::string>> map = {
        {'2', {"a", "b", "c"}}, {'3', {"d", "e", "f"}},
        {'4', {"g", "h", "i"}}, {'5', {"j", "k", "l"}},
        {'6', {"m", "n", "o"}}, {'7', {"p", "q", "r", "s"}},
        {'8', {"t", "u", "v"}}, {'9', {"w", "x", "y", "z"}},
    };

    if (digits.empty()) {
        return {};
    }

    if (digits.size() == 1) {
        return map.at(digits[0]);
    }

    std::vector<std::string> res{};

    for (auto const& letters = map.at(digits[0]); const auto& letter : letters) {
        std::vector<std::string> others = LetterCombinations(digits.substr(1));

        std::ranges::transform(
            others.begin(),others.end(),
            std::back_inserter(res),
            [&letter](std::string const& other){
                return letter + other;
            });
    }

    return res;
}