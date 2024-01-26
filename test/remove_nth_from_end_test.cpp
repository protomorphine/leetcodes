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
    ds::ListNode* node = ds::ListNode::Create(1, 2, 3, 4, 5);

    ASSERT_EQ(ListToVector(tasks::RemoveNthFromEnd(node, 2)), (std::vector<int>{1, 2, 3, 5}));

    node = ds::ListNode::Create(1);
    ASSERT_EQ(ListToVector(tasks::RemoveNthFromEnd(node, 1)), (std::vector<int>{}));

    node = ds::ListNode::Create(1, 2);
    ASSERT_EQ(ListToVector(tasks::RemoveNthFromEnd(node, 1)), (std::vector<int>{1}));
}