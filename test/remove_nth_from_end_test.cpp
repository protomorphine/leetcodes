//
// Created by D.Zaycev on 22.12.2023.
//
#include <gtest/gtest.h>

#include "../src/tasks/tasks.h"

std::vector<int> ListToVector(ds::ListNode const* head) {
    std::vector<int> vec{};
    while (head) {
        vec.push_back(head->val);
        head = head->next;
    }

    return vec;
}

TEST(RemoveNthFromEndTest, Positive) {
    ASSERT_EQ(ListToVector(tasks::RemoveNthFromEnd(ds::ListNode::Create(1, 2, 3, 4, 5), 2)), (std::vector<int>{1, 2, 3, 5}));
    ASSERT_EQ(ListToVector(tasks::RemoveNthFromEnd(ds::ListNode::Create(1), 1)), (std::vector<int>{}));
    ASSERT_EQ(ListToVector(tasks::RemoveNthFromEnd(ds::ListNode::Create(1, 2), 1)), (std::vector<int>{1}));
}