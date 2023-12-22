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
    ds::ListNode node {
        1, new ds::ListNode(
               2, new ds::ListNode(3, new ds::ListNode(4, new ds::ListNode(5))))
    };

    ASSERT_EQ(ListToVector(tasks::RemoveNthFromEnd(&node, 2)), (std::vector<int>{1, 2, 3, 5}));

    node = ds::ListNode(1);
    ASSERT_EQ(ListToVector(tasks::RemoveNthFromEnd(&node, 1)), (std::vector<int>{}));

    node = ds::ListNode(1, new ds::ListNode(2));
    ASSERT_EQ(ListToVector(tasks::RemoveNthFromEnd(&node, 1)), (std::vector<int>{1}));
}