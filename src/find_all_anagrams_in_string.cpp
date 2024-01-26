//
// Created by D.Zaycev on 26.01.2024.
//
#include "tasks/tasks.h"

namespace internal {
std::vector<int> CharactersFrequencies(std::string_view str) {
    std::vector<int> frequencies(26);

    for (auto const ch : str) {
        frequencies[ch - 'a'] += 1;
    }

    return frequencies;
}
}  // namespace internal

std::vector<int> tasks::FindAnagrams(std::string_view s, std::string_view p) {
    size_t const kWindowSize = p.size();

    std::vector<int> anagram_indices{};
    std::vector<int> reference_frequencies = internal::CharactersFrequencies(p);

    for (size_t i = 0; i < s.size(); ++i) {
        std::string_view current_substring = s.substr(i, kWindowSize);

        if (current_substring.size() != kWindowSize) {
            continue;
        }

        if (reference_frequencies == internal::CharactersFrequencies(current_substring)) {
            anagram_indices.push_back(static_cast<int>(i));
        }
    }

    return anagram_indices;
}