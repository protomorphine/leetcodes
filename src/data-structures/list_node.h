//
// Created by D.Zaycev on 22.12.2023.
//

#pragma once

namespace ds {

struct ListNode {
    int val;
    ListNode* next = nullptr;
    ListNode() : val(0) {}
    explicit ListNode(int x) : val(x) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

}  // namespace ds