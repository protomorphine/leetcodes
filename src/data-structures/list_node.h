//
// Created by D.Zaycev on 22.12.2023.
//

#pragma once
#include <concepts>

namespace ds {

struct ListNode {
    int val;
    ListNode* next = nullptr;
    ListNode() : val(0) {}
    explicit ListNode(int x) : val(x) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

    [[nodiscard]] static ListNode* Create(std::same_as<int> auto first,
                            std::same_as<int> auto... ints) {
        auto head = new ListNode(first);
        auto curr = head;

        ([&curr](std::same_as<int> auto arg) {
            curr->next = new ListNode(arg);
            curr = curr->next;
        }(ints), ...);

        return head;
    }
};

}  // namespace ds